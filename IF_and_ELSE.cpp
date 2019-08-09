// IF_and_ELSE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// ## TRYING TO REDUCE THE KEYSTROES

#include "pch.h"
#include <iostream>
#include <utility>
#include <bits/stdc++.h>

#define LOOP(start_, end_, pas_) for(int i = start_; i < end_; i+=pas_) 
#define ND_(name) node *name = new node;
#define NEXT_(first, second) first->next = second;
using namespace std;

struct node {
	int data;
	node *next;
};

class list
{
private: 
	node *head, *tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	/*
	BASIC FRAMEWORK
	*/
	void createnode(int value) {
		node *temp = new node;
		temp->data = value;
		NEXT_(temp, NULL);

		if (head == NULL){
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			NEXT_(tail, temp);
			tail = temp;
		}
	}

	void display() {
		ND_(temp);
		temp = head;
		while (temp != NULL) {
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}
	/*
	------------
	*/

	/*
	1.. INSERTION
	2.. DELETION
	
	1.1.. INSERTION AT THE START
		(A) NEW NODE SHOULD BE CONNECTED TO THE FIRST NODE, WHICH MEANS THE HEAD.
		THIS CAN BE ACHIEVED BY PUTTING THE ADRESS OF THE HEAD IN THE NEXT FIELD OF THE 
		NEW NODE.
		(B) NEW NODE SHOULD BE CONSIDERED AS A HEAD. IT CAN BE ACHIEVED BY DECLARING
		HEAD EQUALS TO THE NEW NODE.
	*/
	void insert_start(int value){
		ND_(temp);
		temp->data = value;
		NEXT_(temp, head);
		head = temp;
	}

	/*
	1.2.. INSERTION AT THE END (SAME AS CREATION)
	1.3.. INSERTION AT PARTICULAR POSITION
		(A) PASS THE ADRESS OF THE NEW NODE IN THE NEXT FIELD OF THE PREVIOUS NODE
		(B) PASS THE ADRESS OF THE CURRENT NODE IN THE NEXT FIELD OF THE NEW NODE
	*/
	void insert_position(int pos, int value) {
		ND_(pre);
		ND_(cur);
		ND_(temp);
		cur = head;

		LOOP(0,pos, 1) {
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		NEXT_(pre, temp);
		NEXT_(temp, cur);
	}

	/*
	2.1..DELETION AT THE START
		(A) DECLARE A --TEMP-- POINTER AND PASS THE ADRESS OF THE FIRST NODE, I.E. HEAD TO THIS POINTER
		(B) DECLARE THE SECOND NODE OF THE LIST AS HEAD AS IT WILL BE THE FIRST NODE OF LINKED LIST AFTER DELETION
		(C) DELETE THE TEMP NODE
	*/
	void delete_first() {
		ND_(temp);
		temp = head;
		head = head->next;
		delete temp;
	}
	
	/*
	2.2.. DELETION AT THE END
	*/
	void delete_last() {
		ND_(current);
		ND_(previous);
		current = head;
		while (current->next != NULL) {
			previous = current;
			current = current->next;
		}
		tail = previous;
		NEXT_(previous, NULL);
		delete current;
	}

	/*
	2.3.. DELETION AT A PARTICULAR POSITION
	*/
	void delete_position(int pos) {
		ND_(current);
		ND_(previous);
		current = head;
		LOOP(1, pos, 1) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
	}
};

int main()
{
	return 0;
}

