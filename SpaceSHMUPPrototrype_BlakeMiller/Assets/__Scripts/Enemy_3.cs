using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy_3 : Enemy
{
    [Header("Enemy_3 Inscribed Fields")]
    public float lifeTime = 5;

    [Header("Enemy_3 Private Fields")]
    [SerializeField]
    private Vector3[] points;
    [SerializeField]
    private float birthTime;


    void Start()
    {
        points = new Vector3[3];

        points[0] = pos;

        float xMin = -bndCheck.camWidth + bndCheck.radius;
        float xMax = bndCheck.camWidth - bndCheck.radius;

        points[1] = Vector3.zero;
        points[1].x = Random.Range(xMin, xMax);
        points[1].y = -bndCheck.camHeight * Random.Range(2.75f, 2);

        points[2] = Vector3.zero;
        points[2].y = pos.y;
        points[2].x = Random.Range(xMin, xMax);

        birthTime = Time.time;
    }

    public override void Move()
    {
        float u = (Time.time - birthTime) / lifeTime;

        if (u > 1)
        {
            Destroy(this.gameObject);
            return;
        }

        transform.rotation = Quaternion.Euler(u * 180, 0, 0);

        Vector3 p01, p12;
        u = u - 0.1f * Mathf.Sin(u * Mathf.PI * 2);
        p01 = (1 - u) * points[0] + u * points[1];
        p12 = (1 - u) * points[1] + u * points[2];
        pos = (1 - u) * p01 + u * p12;

        
    }
}
