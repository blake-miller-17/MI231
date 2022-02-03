using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ePowerUpType { none, auto, spread, missile, jetpack }

public class PowerUpAct : MonoBehaviour
{
    public ePowerUpType type = ePowerUpType.none;
    
    
    // void OnCollisionEnter2D(Collision2D coll)
    // {
    //     if (coll.gameObject.CompareTag("Player"))
    //     {
    //         //Debug.Log("Hit the player now activate some powers");
    //         Destroy(gameObject);
    //     }
    //     //Debug.Log("Collided with" + coll.gameObject.name);
    // }
}
