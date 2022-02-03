using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpSpawn : MonoBehaviour
{
    [Header("Inscribed")]
    public GameObject[] powerUps;
    public float moveRight = 1f;
    public float moveLeft = -1f;

    Rigidbody2D rigid;
    Vector3 start;

    void Start()
    {
        rigid = gameObject.GetComponent<Rigidbody2D>();
        start = transform.position;
        start.y += 1f;
        //rigid.velocity = new Vector3(Random.Range(moveLeft, moveRight), .5f, 0);
        //start.x = Random.Range(moveLeft, moveRight);
        //Debug.Log("start Pos of gameObject: " + start.x);
    }

    

    void OnTriggerEnter2D(Collider2D collision)
    {
        //Debug.Log("RAND: " + Random.Range(0, 10));
        //if its 0 it will go right, and if its 1 it will go left
        //Debug.Log("DIR: " + dir);
        GameObject powerUp = powerUps[Random.Range(0, powerUps.Length-1)];
        Debug.Log("PowerUp type: " + powerUp.name);
        float rand = Random.Range(0, 10);
        int dir = (rand <= 5) ? 0 : 1;
        GameObject powup;

        switch (dir)
        {
            case (0):
                if (powerUp.name == "Auto_POWERUP" || powerUp.name == "Refuel" )
                {
                    powup = Instantiate(powerUp, start, Quaternion.Euler(new Vector3(0, 0, 0)));
                    powup.GetComponent<Rigidbody2D>().AddForce(transform.right * 120);
                    return;
                }
                 powup = Instantiate(powerUp, start, Quaternion.Euler(new Vector3(0, -90, 0)));
                 powup.GetComponent<Rigidbody2D>().AddForce(transform.right * 120);
                break;
            case (1):
                if (powerUp.name == "Auto_POWERUP" || powerUp.name == "Refuel")
                {
                    powup = Instantiate(powerUp, start, Quaternion.Euler(new Vector3(0, 0, 0)));
                    powup.GetComponent<Rigidbody2D>().AddForce(transform.right * 200);
                    return;
                }
                powup = Instantiate(powerUp, start, Quaternion.Euler(new Vector3(0, -90, 0)));
                powup.GetComponent<Rigidbody2D>().AddForce(-transform.right * 200);
                break;
        }

       /* GameObject obj = Instantiate(powerUp, start, transform.rotation);
        obj.GetComponent<Rigidbody2D>().AddForce(transform.right * 100);
        Debug.Log("power up position: " + powerUp.transform.position + "Vel: " + powerUp.GetComponent<Rigidbody2D>().velocity);*/
        //obj.GetComponent<Rigidbody2D>().velocity = transform.rigidbody.velocity;
    }
        
    
}
        

    
    

