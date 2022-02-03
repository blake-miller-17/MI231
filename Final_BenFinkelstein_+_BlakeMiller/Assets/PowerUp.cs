using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUp : MonoBehaviour
{
    public float speed;
    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.CompareTag("Player"))
        {
            Debug.Log("Hit the player now activate some powers");
            Destroy(gameObject);
        }
        Debug.Log("Collided with" + coll.gameObject.name);
    }
}
