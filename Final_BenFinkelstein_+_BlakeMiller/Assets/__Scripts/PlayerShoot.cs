using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour
{
    [Header("Inscried")]
    public Transform shotAnchor;
    public GameObject[] bullets;
    public float fireDelay = 1.0f;
    public GameObject bulletNone;
    public GameObject bulletAuto;
    public GameObject bulletMissile;
    public GameObject bulletSpread;
    public GameObject jetpackFull;
    public List<BulletInfo> bulletInfos;
    public Player player;

   
    [Header( "Dynamic" )]
    public ePowerUpType bulletType = ePowerUpType.none;

    ePowerUpType prevpUp = ePowerUpType.none;
    private Dictionary<ePowerUpType, GameObject> prefabDict;

    void Start() {
        prefabDict = new Dictionary<ePowerUpType, GameObject>();
        prefabDict.Add( ePowerUpType.none, bulletNone );
        prefabDict.Add( ePowerUpType.auto, bulletAuto );
        prefabDict.Add( ePowerUpType.missile, bulletMissile );
        prefabDict.Add( ePowerUpType.spread, bulletSpread );
        //prefabDict.Add(ePowerUpType.jetpack, jetpackFull);
    }

    void Update()
    {
        fireDelay -= Time.deltaTime;// .1f;
        if ( fireDelay <= 0.0 )
        {
            fireDelay = 0.0f;
        }
        if (Input.GetKey(KeyCode.Z) && fireDelay == 0)
        {
            Shoot();
        }    
    }

    void Shoot()
    {
        if (bulletType == ePowerUpType.jetpack)
        {
            //player.jetpackFuel = player.jetpackFuelMax;
            return;
        }
        if (bulletType == ePowerUpType.auto)
        {
            fireDelay = .2f;
            Instantiate(prefabDict[bulletType], shotAnchor.position, shotAnchor.rotation);
        }
        if (bulletType == ePowerUpType.spread)
        {
            fireDelay = 1f;
            CreateSpread(-30f);
            CreateSpread(-15f);
            CreateSpread();
            CreateSpread(15f);
            CreateSpread(30f);
        }
        if (bulletType == ePowerUpType.missile)
        {
            fireDelay = 1.2f;
            Instantiate(prefabDict[bulletType], shotAnchor.position, shotAnchor.rotation);
        }
        //Instantiate(prefabDict[bulletType], shotAnchor.position, shotAnchor.rotation);
    }

    //Found this online to help create a good spreadshot
    //https://forum.unity.com/threads/trying-to-create-a-spreadshot-effect-unity-2d-solved.441131/
    void CreateSpread(float offset = 0f)
    {
        GameObject bullet = Instantiate<GameObject>(bulletSpread);
        bullet.transform.position = transform.position;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        rigid.AddForce(Quaternion.AngleAxis(offset, Vector3.forward) * Vector3.right * 100);
    }
    void OnCollisionEnter2D(Collision2D coll)
    {
        PowerUpAct pUp = coll.gameObject.GetComponent<PowerUpAct>();
        if (pUp == null) return;

        if (pUp.type != ePowerUpType.jetpack)
        {
            prevpUp = pUp.type;
        }
        
        
        if (pUp.type == ePowerUpType.jetpack && pUp != null)
        {
            player.jetpackFuel = player.jetpackFuelMax;
            bulletType = prevpUp;
        }
        bulletType = pUp.type;
        
        Destroy(coll.gameObject);
    }
}

[System.Serializable]
public class BulletInfo {
    public ePowerUpType type;
    public GameObject bulletPrefab;
    public float shotDelay = 1;
}