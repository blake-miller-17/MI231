using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{

    public float speed = 10f;
    public Rigidbody2D rigid;


    void Start()
    {
        rigid.velocity = transform.right * speed;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        Destroy(gameObject);    
    }

    void OnBecameInvisible()
    {
        Debug.Log("Alr so its invisible");
        Destroy(gameObject);
    }
}
