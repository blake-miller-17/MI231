using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Keeps a GameObject on screen.
/// Note that this ONLY works for an orthographic Main Camera
/// </summary>
public class BoundsCheck : MonoBehaviour
{
    [System.Flags]
    public enum eScreenLocs
    {
        onScreen = 0,
        offRight = 1,
        offLeft = 2,
        offUp = 4,
        offDown = 8,
    }
    [Header("Inscribed")]
    public float radius = 1f;
    public bool keepOnScreen = true;

    [Header("Dynamic")]
    public eScreenLocs screenLocs = eScreenLocs.onScreen; 
    //public bool isOnScreen = true;
    public float camWidth;
    public float camHeight;

    void Awake()
    {
        camHeight = Camera.main.orthographicSize;
        camWidth = camHeight * Camera.main.aspect;
    }

    void LateUpdate()
    {
        Vector3 pos = transform.position;
        screenLocs = eScreenLocs.onScreen;
        //isOnScreen = true;

        if (pos.x > camWidth - radius)
        {
            pos.x = camWidth - radius;
            screenLocs |= eScreenLocs.offRight;
            //isOnScreen = false;
        }
        if (pos.x < -camWidth + radius)
        {
            pos.x = -camWidth + radius;
            screenLocs |= eScreenLocs.offLeft;
            //isOnScreen = false;
        }
        if (pos.y > camHeight - radius)
        {
            pos.y = camHeight - radius;
            screenLocs |= eScreenLocs.offUp;
            //isOnScreen = false;
        }
        if (pos.y < -camHeight + radius)
        {
            pos.y = -camHeight + radius;
            screenLocs |= eScreenLocs.offDown;
            //isOnScreen = false;
        }
        if (keepOnScreen && !isOnScreen)
        {
            transform.position = pos;
            screenLocs = eScreenLocs.onScreen;
            //isOnScreen = true;
        }
    }

    public bool isOnScreen
    {
        get { return screenLocs == eScreenLocs.onScreen; }
    }

    public bool LocIs( eScreenLocs testLoc)
    {
        if ((screenLocs & testLoc) == testLoc) return true;
        return false;
    }

}

