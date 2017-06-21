﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Boundary {
	public float xMin, xMax, zMin, zMax;
}

public class PlayerController : MonoBehaviour {
	public float speed;
	public float tilt;
	public Boundary boundary = new Boundary();

	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate = 0.5f;
	private float nextFire = 0.0f;

	void Update() 
	{
		if (Input.GetButton("Fire1") && Time.time > nextFire) {
			nextFire = Time.time + fireRate;
			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
			AudioSource audio = gameObject.GetComponent (typeof(AudioSource)) as AudioSource;
			audio.Play ();
		}
	}

	void FixedUpdate() 
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		Rigidbody body = gameObject.GetComponent (typeof(Rigidbody)) as Rigidbody;
		body.velocity = movement * speed;

		body.position = new Vector3 (Mathf.Clamp (body.position.x, boundary.xMin, boundary.xMax), 
			0.0f, 
			Mathf.Clamp (body.position.z, boundary.zMin, boundary.zMax));

		body.rotation = Quaternion.Euler (0.0f, 0.0f, body.velocity.x * -tilt);
	}
		
}
