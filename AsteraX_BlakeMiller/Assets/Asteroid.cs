//#define SHOW_DEBUG_MESSAGES

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asteroid : MonoBehaviour
{
    static public List<Asteroid> ASTEROIDS = new List<Asteroid>();
    public int size = 3;
    public float speed = 15;
    public float sizeScale = 0.5f;
    public int numChildAsteroids = 2;

    #if SHOW_DEBUG_MESSAGES
        void Awake() {
            Debug.Log( "size at Awake is: " + size);
        }
    #endif

    // Start is called before the first frame update
    void Start()
    {
        #if SHOW_DEBUG_MESSAGES
            Debug.Log( "size at Start is: " + size);
        #endif

        // Scale to our size
        transform.localScale = Vector3.one * size * sizeScale;

        // Set the initial velocity
        Rigidbody rigid = GetComponent<Rigidbody>();
        Vector3 vel = Random.onUnitSphere;
        vel.z = 0;
        vel.Normalize();
        vel *= speed / size;     
        rigid.velocity = vel;

        Vector3 angularVel = new Vector3();
        angularVel.x = Random.Range(-2, 2);
        angularVel.y = Random.Range(-2, 2);
        angularVel.z = Random.Range(-2, 2);
        rigid.angularVelocity = angularVel;
        
        ASTEROIDS.Add( this );
    }

    
    void OnCollisionEnter(Collision coll)
    {
        if (coll.gameObject.GetComponent<Bullet>() != null)
        {
            // We are dealing with the bullet!
            // Destroy the Bullet
            Destroy( coll.gameObject );
            // If size > 1 then don't create children
            if (size > 1)
            {
                // Instantiate two child asteroids
                for ( int i = 0; i < numChildAsteroids; i++ )
                {
                    GameObject astGO = Instantiate<GameObject>(gameObject);
                    Asteroid ast = astGO.GetComponent<Asteroid>();
                    ast.size--;
                }
            }
            // Destroy this bigger asteroid
            Destroy(gameObject);
        }
    }

    void OnDestroy() {
        ASTEROIDS.Remove( this );
        
    }
}
