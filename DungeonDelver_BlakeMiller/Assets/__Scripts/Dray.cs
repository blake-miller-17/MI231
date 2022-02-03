using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(InRoom))]
public class Dray : MonoBehaviour, IFacingMover, IKeyMaster
{
    static private Dray S;
    static public IFacingMover IFM;
    public enum eMode { idle, move, attack, roomTrans, knockback }

    [Header("Inscribed")]
    public float speed = 5;
    public float attackDuration = 0.25f;
    public float attackDelay = 0.5f;
    public float roomTransDelay = 0.5f;
    public int maxHealth = 10;
    public float knockbackSpeed = 10;
    public float knockbackDuration = 0.25f;
    public float invincibleDuration = 0.5f;

    [Header("Dynamic")]
    public int dirHeld = -1;
    public int facing = 1;
    public eMode mode = eMode.idle;
    public bool invincible = false;
    [SerializeField]
    [Range(0, 20)]
    private int _numKeys = 0;

    [SerializeField]
    [Range(0, 10)]
    private int _health;
    public int health
    {
        get { return _health; }
        set { _health = value; }
    }
    private float timeAtkDone = 0;
    private float timeAtkNext = 0;
    public float roomTransDone = 0;
    private Vector2 roomTransPos;
    private float knockbackDone = 0;
    private float invincibleDone = 0;
    private Vector2 knockbackVel;

    private SpriteRenderer sRend;
    private Rigidbody2D rigid;
    private Animator anim;
    private InRoom inRm;

    private Vector2[] directions = new Vector2[]
    {  Vector2.right, Vector2.up, Vector2.left, Vector2.down };

    private KeyCode[] keys = new KeyCode[] {
        KeyCode.RightArrow, KeyCode.UpArrow, KeyCode.LeftArrow, KeyCode.DownArrow,
        KeyCode.D,          KeyCode.W,       KeyCode.A,         KeyCode.S   };

    void Awake()
    {
        S = this;
        IFM = this;
        sRend = GetComponent<SpriteRenderer>();
        rigid = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        inRm = GetComponent<InRoom>();
        health = maxHealth;
    }

    void Update()
    {
        if (invincible && Time.time > invincibleDone) invincible = false;
        sRend.color = invincible ? Color.red : Color.white;
        if (mode == eMode.knockback )
        {
            rigid.velocity = knockbackVel;
            if (Time.time < knockbackDone) return;
        }

        if (mode == eMode.roomTrans)
        {
            rigid.velocity = Vector3.zero;
            anim.speed = 0;
            posInRoom = roomTransPos;
            if (Time.time < roomTransDone) return;
            mode = eMode.idle;
        }
        dirHeld = -1;
        for (int i = 0; i < keys.Length; i++)
        {
            if (Input.GetKey(keys[i])) dirHeld = i % 4;
        }

        if (Input.GetKeyDown(KeyCode.Z) && Time.time >= timeAtkNext)
        {
            mode = eMode.attack;
            timeAtkDone = Time.time + attackDuration;
            timeAtkNext = Time.time + attackDelay;
        }

        if (Time.time >= timeAtkDone)
        {
            mode = eMode.idle;
        }

        if (mode != eMode.attack)
        {
            if (dirHeld == -1)
            {
                mode = eMode.idle;
            }
            else
            {
                facing = dirHeld;
                mode = eMode.move;
            }
        }

        Vector2 vel = Vector2.zero;
        switch (mode)
        {
            case eMode.attack:
                anim.CrossFade("Dray_Attack_" + facing, 0);
                anim.speed = 0;
                break;

            case eMode.idle:
                anim.CrossFade("Dray_Walk_" + facing, 0);
                anim.speed = 0;
                break;
            case eMode.move:
                vel = directions[dirHeld];
                anim.CrossFade("Dray_Walk_" + facing, 0);
                anim.speed = 1;
                break;
        }

        rigid.velocity = vel * speed;
    }

    void LateUpdate()
    {
        Vector2 gridPosIR = GetGridPosInRoom(0.25f);

        int doorNum;
        for (doorNum = 0; doorNum < 4; doorNum++)
        {
            if (gridPosIR == InRoom.DOORS[doorNum])
            {
                break;
            }
        }

        if (doorNum > 3 || doorNum != facing) return;

        Vector2 rm = roomNum;
        switch (doorNum)
        {
            case 0:
                rm.x += 1;
                break;
            case 1:
                rm.y += 1;
                break;
            case 2:
                rm.x -= 1;
                break;
            case 3:
                rm.y -= 1;
                break;
        }

        if (0 <= rm.x && rm.x <= InRoom.MAX_RM_X)
        {
            if (0 <= rm.y && rm.y <= InRoom.MAX_RM_Y)
            {
                roomNum = rm;
                roomTransPos = InRoom.DOORS[(doorNum + 2) % 4];
                posInRoom = roomTransPos;
                mode = eMode.roomTrans;
                roomTransDone = Time.time + roomTransDelay;
            }
        }
    }

    void OnCollisionEnter2D( Collision2D coll)
    {
        if (invincible) return;
        DamageEffect dEf = coll.gameObject.GetComponent<DamageEffect>();
        if (dEf == null) return;

        health -= dEf.damage;
        invincible = true;
        invincibleDone = Time.time + invincibleDuration;

        if (dEf.knockback)
        {
            Vector2 delta = transform.position - coll.transform.position;
            if (Mathf.Abs(delta.x) >= Mathf.Abs(delta.y))
            {
                delta.x = (delta.x > 0) ? 1 : -1;
                delta.y = 0;
            } else
            {
                delta.y = (delta.y > 0) ? 1 : -1;
                delta.x = 0;
            }

            knockbackVel = delta * knockbackSpeed;
            rigid.velocity = knockbackVel;

            mode = eMode.knockback;
            knockbackDone = Time.time + knockbackDuration;
        }
    }

    static public int HEALTH { get { return S._health; } }
    static public int NUM_KEYS { get { return S._numKeys; } }
    public int GetFacing() { return facing; }
    public float GetSpeed() { return speed; }
    public bool moving { get { return (mode == eMode.move); } }
    public float gridMult { get { return inRm.gridMult; } }
    public bool isInRoom { get { return inRm.isInRoom; } }
    public Vector2 roomNum
    {
        get { return inRm.roomNum; }
        set { inRm.roomNum = value; }
    }

    public Vector2 posInRoom
    {
        get { return inRm.posInRoom; }
        set { inRm.posInRoom = value; }
    }

    public Vector2 GetGridPosInRoom(float mult = -1)
    {
        return inRm.GetGridPosInRoom(mult);
    }

    public int keyCount
    {
        get { return _numKeys; }
        set { _numKeys = value; }
    }

    public Vector2 pos {
        get { return (Vector2) transform.position; }
    }
    
}
