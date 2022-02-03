using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpCollide : MonoBehaviour
{

    void OnTriggerEnter2D(Collider2D coll)
    {
        //Debug.Log("Hit the box");
        Destroy(gameObject);
    }
    
}
