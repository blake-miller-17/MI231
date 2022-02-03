using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunkBullet : MonoBehaviour
{
    public float speed = 10f;
    public Rigidbody2D rigid;

    void Start()
    {
        
        
        rigid.velocity = -transform.right * speed;
        //Debug.Log(rigid.velocity);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        //Debug.Log("Bullets: " + other.gameObject.name);
        Destroy(gameObject);
    }

    /*void OnBecameInvisible()
    {
        Debug.Log("Alr so its invisible");
        Destroy(gameObject);
    }*/
}
