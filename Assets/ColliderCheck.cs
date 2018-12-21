using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderCheck : MonoBehaviour {

    public Rigidbody Player;
    private int playerLife = 3;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "Bullet")
        {
            playerLife--;
        }
    }

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(playerLife <=0)
        {
            Player.transform.localScale = Vector3.zero;
            Destroy(Player, 0.0f);
        }
	}
}
