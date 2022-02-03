using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Boss : Enemy
{
    [Header("Inscribed")]
    public float speed;
    public float fireRate = 1f;
    public float nextFire;
    [Range(0, 1)]
    public float u = 0;
    public float duration = 1;
    public float uExponent = 1;

    float timeStart;

    public Transform shotAnchor;
    public GameObject bullet;
    public Transform t0;
    public Transform t1;
    Vector3 pos, localScale;

    void Start()
    {
        pos = transform.position;
        localScale = transform.localScale;

        timeStart = Time.time;
        nextFire = Time.time;    
    }

    void Update()
    {
        CanWeFire();
        MoveBezier();
    }

    void CanWeFire() 
    {
       if (Time.time > nextFire)
        {
            Shoot();
        }
    }

    void Shoot()
    {
        Instantiate(bullet, shotAnchor.position, Quaternion.identity);
        nextFire = Time.time + fireRate;
    }

    void MoveBezier()
    {
        u = (Time.time - timeStart) / duration;
        u = u % 1f;

        Vector3 p0 = t0.position;
        Vector3 p1 = t1.position;

        Vector3 p01 = (1 - u) * p0 + u * p1;

        transform.position = p01;
    }

    public override void Die()
    {
        //Fill this in correctly later
        //SceneSwap.LoadScene("The scene for when the boss dies)
        Debug.Log("The boss is now dead");
        base.Die();
    }

}
