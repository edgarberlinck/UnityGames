using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mover : MonoBehaviour {
	// Use this for initialization
	public float speed;
	void Start()
	{
		Rigidbody body = gameObject.GetComponent (typeof(Rigidbody)) as Rigidbody;
		body.velocity = transform.forward * speed;
	}
}
