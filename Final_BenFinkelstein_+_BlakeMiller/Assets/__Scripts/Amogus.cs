using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Amogus : Enemy
{
   [Header("Inscribed: Amogus")]

    public float speed;
    private Transform player;

    //Vector2 vel;
    //Rigidbody2D rigidb;
    [Header("Dynamic: Amogus")]
    public int facing = 0;


    Vector2 PrevPos;
    Vector2 NewPos;
    Vector2 ObjVel;

    //eModes for enemy, is it walking or dead?
    public enum eMode {move, die}

    void Start()
    {
        PrevPos = transform.position;
        NewPos = transform.position;
        //find player GO
        // source: Blackthornprod
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Transform>();
        if (player == null) return;
    }

    void FixedUpdate()
    {
        NewPos = transform.position;
        ObjVel = (NewPos - PrevPos) / Time.fixedDeltaTime;
        PrevPos = NewPos;
    }

    void Update()
    {
        //set the enemy to follow the player!
        // source: Blackthornprod
        if (player == null) return;
        
        transform.position = Vector2.MoveTowards(transform.position, player.position, speed * Time.deltaTime);
        if(ObjVel.x <= 0)
        {
            transform.rotation = Quaternion.Euler(0, 0, 0);
        } else
        {
            transform.rotation = Quaternion.Euler(0, 180, 0);
        }
       
     
    
    }
}
