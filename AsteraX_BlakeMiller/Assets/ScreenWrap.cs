using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenWrap : MonoBehaviour
{
    static float halfWidth = 16;
    static float halfHeight = 9;

    [Header("Inscribed")]
    public int wrapLimit = 3;

    [Header("Dynamic")]
    public int wrapCount = 0;

    void FixedUpdate() {
        bool incrementWrapCount = false;
        // If the GameObject is out of bounds then wrap it
        Vector3 pos = transform.position;
        if (Mathf.Abs( pos.x ) > halfWidth ) {
         pos.x = -pos.x; 
         incrementWrapCount = true;

        }

        if (Mathf.Abs( pos.y ) > halfHeight ) {
         pos.y = -pos.y; 
         incrementWrapCount = true;

        }
        transform.position = pos;

        // Check the wrap count
        if (wrapLimit > 0 && incrementWrapCount) {
            wrapCount++;
            if (wrapCount >= wrapLimit ) {
                Destroy(gameObject);
            }
        }
    }

}
