using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetroidCamera : MonoBehaviour {

    [Header("Set in Inspector")]
    public Transform    target;
    public GameObject   camBoundsParent;
    [Tooltip("The distance from the center of the camera to the side of the frame.")]
    public float        camHalfW = 8;
    [Tooltip("The distance from the center of the camera to the top or bottom of the frame.")]
    public float        camHalfH = 7.5f;
    public float        camOffsetZ = -10;
    [Tooltip("Must be between 0 & 1. Determines size of area in middle of screen that will not force scroll of camera.")]
    public float        deadZoneSize = 0.5f; // What border area must the target enter to force a scroll of the camera - JB

    [Header("Set Dynamically")]
    public Collider     currColld;

    private Collider[]  camBounds;


	// Use this for initialization
	void Awake () {
        // Get all of the camBounds colliders - JB
        camBounds = camBoundsParent.GetComponentsInChildren<Collider>();
        currColld = null;
	}
	
	void FixedUpdate () {
        if (target == null) return;
        // Get the position of the target
        Vector3 tPos = target.position;

        // Determine whether the target is no longer still within the same Collider - JB
        if (currColld == null || !currColld.bounds.Contains(tPos)) {
            // Find the Collider that the target IS within - JB
            currColld = null;
            foreach (Collider colld in camBounds) {
                if (colld.bounds.Contains(tPos)) {
                    // If we find a collider, then set currColld and break out of the foreach loop – JB
                    currColld = colld;
                    break;
                }
            }
        }

        // First, align the camera with the target (with a Z offset, of course) – JB
        tPos.z += camOffsetZ;
       
        // Make sure that the Camera only moves if the target is outside the middle of the screen
        Vector3 cPos = transform.position;
        float deadZoneX = camHalfW * deadZoneSize;
        float deadZoneY = camHalfH * deadZoneSize;
        if ( Mathf.Abs(tPos.x - cPos.x) > deadZoneX ) {
            if (tPos.x > cPos.x) {
                cPos.x = tPos.x - deadZoneX;
            } else {
                cPos.x = tPos.x + deadZoneX;
            }
        }
        if ( Mathf.Abs(tPos.y - cPos.y) > deadZoneY ) {
            if (tPos.y > cPos.y) {
                cPos.y = tPos.y - deadZoneY;
            } else {
                cPos.y = tPos.y + deadZoneY;
            }
        }
		
        // if the currColld is not null, limit movement to within the Collider – JB
        if (currColld != null) {
            // Account for camW and camH when judging the size of the bounds - JB
            Vector3 min = currColld.bounds.min;
            Vector3 max = currColld.bounds.max;

            min.x += camHalfW;
            min.y += camHalfH;
            max.x -= camHalfW;
            max.y -= camHalfH;

            cPos.x = Mathf.Clamp(cPos.x, min.x, max.x);
            cPos.y = Mathf.Clamp(cPos.y, min.y, max.y);
        }

        transform.position = cPos;
	}
}
