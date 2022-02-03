using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class LockedDoor : MonoBehaviour, ISwappable
{
    static private LockedDoor[,] _LOCKED_DOORS;
    static private Dictionary<int, DoorInfo> _DOOR_INFO_DICT;

    const int lockedR = 95;
    const int lockedUR = 81;
    const int lockedUL = 80;
    const int lockedL = 100;
    const int lockedDL = 101;
    const int lockedDR = 102;

    public Vector2Int mapLoc;


    public class DoorInfo
    {
        public int tileNum;
        public Vector2Int otherHalf;

        public DoorInfo(int tN, Vector2Int oH)
        {
            tileNum = tN;
            otherHalf = oH;
            if (_DOOR_INFO_DICT != null)
            {
                _DOOR_INFO_DICT.Add(tileNum, this);
            }
        }
    }

    void Start()
    {
        if (_LOCKED_DOORS == null)
        {
            BoundsInt mapBounds = MapInfo.GET_MAP_BOUNDS();
            _LOCKED_DOORS = new LockedDoor[mapBounds.size.x, mapBounds.size.y];
        }
        mapLoc = Vector2Int.FloorToInt(transform.position);
        _LOCKED_DOORS[mapLoc.x, mapLoc.y] = this;
        InitDoorInfoDict();
    }

    void InitDoorInfoDict()
    {
        _DOOR_INFO_DICT = new Dictionary<int, DoorInfo>();

        new DoorInfo(lockedR, Vector2Int.zero);
        new DoorInfo(lockedUR, Vector2Int.left);
        new DoorInfo(lockedUL, Vector2Int.right);
        new DoorInfo(lockedL, Vector2Int.zero);
        new DoorInfo(lockedDL, Vector2Int.right);
        new DoorInfo(lockedDR, Vector2Int.left);
    }

    void OnCollisionStay2D(Collision2D coll)
    {
        if (GET_LOCKED_DOOR(mapLoc) == null) return;

        IKeyMaster iKeyM = coll.gameObject.GetComponent<IKeyMaster>();
        if (iKeyM == null) return;
        if (!_DOOR_INFO_DICT.ContainsKey(tileNum))
        {
            Debug.LogError("_DOOR_INFO_DICT has no Key " + tileNum);
            return;
        }
        DoorInfo myDoor = _DOOR_INFO_DICT[tileNum];

        int reqFacing = GetRequiredFacingToOpenDoor(iKeyM);
        if (iKeyM.keyCount > 0 && iKeyM.GetFacing() == reqFacing)
        {
            iKeyM.keyCount--;
            Destroy(gameObject);
            _LOCKED_DOORS[mapLoc.x, mapLoc.y] = null;

            if (myDoor.otherHalf == Vector2Int.zero) return;
            Vector2Int otherHalfLoc = mapLoc + myDoor.otherHalf;
            LockedDoor otherLD = GET_LOCKED_DOOR(otherHalfLoc);
            if (otherLD != null)
            {
                Destroy(otherLD.gameObject);
                _LOCKED_DOORS[otherHalfLoc.x, otherHalfLoc.y] = null;
            }
        }
    }

    int GetRequiredFacingToOpenDoor(IKeyMaster iKeyM)
    {
        Vector2 relPos = (Vector2)transform.position - iKeyM.pos;
        if (Mathf.Abs(relPos.x) > Mathf.Abs(relPos.y))
        {
            return (relPos.x > 0) ? 0 : 2;
        }
        else
        {
            return (relPos.y > 0) ? 1 : 3;
        }
    }

    static LockedDoor GET_LOCKED_DOOR (Vector2Int mLoc)
    {
        if (_LOCKED_DOORS == null) return null;
        if (mLoc.x < 0 || mLoc.x >= _LOCKED_DOORS.GetLength(0)) return null;
        if (mLoc.y < 0 || mLoc.y >= _LOCKED_DOORS.GetLength(1)) return null;

        return _LOCKED_DOORS[mLoc.x, mLoc.y];
    }

   
    public GameObject guarenteedItem { get; set; }
    public int tileNum { get; private set; }
    public void Init (int fromTileNum, int tileX, int tileY)
    {
        tileNum = fromTileNum;
        SpriteRenderer sRend = GetComponent<SpriteRenderer>();
        sRend.sprite = TilemapManager.DELVER_TILES[fromTileNum].sprite;

        transform.position = new Vector3(tileX + 0.5f, tileY + 0.5f, 0);
    }
}
