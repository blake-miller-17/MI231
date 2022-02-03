using UnityEngine;

public interface ISwappable
{
    GameObject guarenteedItem { get; set; }
    int tileNum { get; }
    void Init(int fromTileNum, int tileX, int tileY);
}