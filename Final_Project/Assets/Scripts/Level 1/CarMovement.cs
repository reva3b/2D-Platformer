﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarMovement : MonoBehaviour
{
    private BoxCollider2D playerCollider;

    private Vector3 posA;

    private Vector3 posB;

    private Vector3 nextPos;


    public float speed = 0;

    [SerializeField]
    private Transform childTransform;

    private PlayerControl thePlayerControlManager;
    public static PlayerStats currentPlayer;
    [SerializeField]
    private Transform transformB;

    private int BusMag;


    // Use this for initialization
    void Start()
    {
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
        // PlayerStats currentPlayer = FindObjectOfType<PlayerStats>();

        playerCollider = GameObject.Find("Player").GetComponent<BoxCollider2D>();
        posA = childTransform.localPosition;
        posB = transformB.localPosition;
        nextPos = posB;

    }

    //Update is called once per frame
    void Update()
    {


        Move();

    }
    private void Move()
    {

        childTransform.localPosition = Vector3.MoveTowards(childTransform.localPosition, nextPos, speed * Time.deltaTime);

        if (Vector3.Distance(childTransform.localPosition, nextPos) <= 0.1)
        {
            ChaneDestination();
        }

    }
    private void ChaneDestination()
    {
        nextPos = nextPos != posA ? posA : posB;

        if (nextPos == posB)
        {
            BusMag = 1;
        }
        else if (nextPos == posA)
        {
            BusMag = -1;
        }

    }

    public void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "Player")
        {
             speed = 8;

        }
    }

        public void OnCollisionExit2D(Collision2D other)
        {
            if (other.gameObject.tag == "Player")
            {
                speed = 0;

            }
        }
    




}
