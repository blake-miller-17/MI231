using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapInfo : MonoBehaviour
{
    static public int W { get; private set; }
    static public int H { get; private set; }
    static public int[,] MAP { get; private set; }
    static public string COLLISIONS { get; private set; }

    [Header("Inscribed")]
    public TextAsset mapLevel;
    public TextAsset mapCollisions;


    void Start()
    {
        LoadMap();

        COLLISIONS = Utils.RemoveLineEndings(mapCollisions.text);
        Debug.Log("COLLISIONS contains " + COLLISIONS.Length + " chars");
    }

    void LoadMap()
    {
        string[] lines = mapLevel.text.Split('\n');
        H = lines.Length;
        string[] tileNums = lines[0].Trim().Split(' ');
        W = tileNums.Length;

        MAP = new int[W, H];
        for ( int j = 0; j < H; j++)
        {
            tileNums = lines[j].Trim().Split(' ');
            for (int i = 0; i < W; i++)
            {
                if ( tileNums[i] == "..")
                {
                    MAP[i, j] = 0;
                } else
                {
                    MAP[i, j] = int.Parse(tileNums[i], System.Globalization.NumberStyles.HexNumber);
                }

            }
        }
        TileSwapManager.SWAP_TILES(MAP);

        Debug.Log("Map size: " + W + " wide by " + H + " high");
    }

    public static BoundsInt GET_MAP_BOUNDS()
    {
        BoundsInt bounds = new BoundsInt(0, 0, 0, W, H, 1);
        return bounds;
    }

}
