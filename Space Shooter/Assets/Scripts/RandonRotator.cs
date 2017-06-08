using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandonRotator : MonoBehaviour {

	public float tumble;

	void Start () {
		Rigidbody body = gameObject.GetComponent (typeof(Rigidbody)) as Rigidbody;
		body.angularVelocity = Random.insideUnitSphere * tumble;
	}
}
