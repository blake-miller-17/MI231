using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    protected static Vector2[] directions = new Vector2[]
    {
        Vector2.right, Vector2.left, Vector2.zero };

    [Header("Inscribed: Enemy")]
    public float maxHealth = 1;

    [Header("Dynamic: Enemy")]
    public float health;

    protected Animator anim;
    protected Rigidbody2D rigid;
    protected SpriteRenderer sRend;

    protected virtual void Awake()
    {
        health = maxHealth;
        anim = GetComponent<Animator>();
        rigid = GetComponent<Rigidbody2D>();
        sRend = GetComponent<SpriteRenderer>();
    }

    void OnTriggerEnter2D(Collider2D collision)
    {
        DamageEffect dEf = collision.gameObject.GetComponent<DamageEffect>();
        if (dEf == null) return;

        health -= dEf.damage;
        //Debug.Log("health of Enemy: " + health);
        if (health <= 0) Die();
    }

    public virtual void Die()
    {
        Destroy(gameObject);
    }
}
