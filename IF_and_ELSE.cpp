// IF_and_ELSE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

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
		temp->next = NULL;

		if (head == NULL){
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}

	void display() {
		node *temp = new node;
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
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	/*
	1.2.. INSERTION AT THE END (SAME AS CREATION)
	1.3.. INSERTION AT PARTICULAR POSITION
		(A) PASS THE ADRESS OF THE NEW NODE IN THE NEXT FIELD OF THE PREVIOUS NODE
		(B) PASS THE ADRESS OF THE CURRENT NODE IN THE NEXT FIELD OF THE NEW NODE
	*/
	void insert_position(int pos, int value) {
		node *pre = new node;
		node *cur = new node;
		node *temp = new node;
		cur = head;

		for (int i = 0; i < pos; i++) {
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}

	/*
	2.1..DELETION AT THE START
		(A) DECLARE A --TEMP-- POINTER AND PASS THE ADRESS OF THE FIRST NODE, I.E. HEAD TO THIS POINTER
		(B) DECLARE THE SECOND NODE OF THE LIST AS HEAD AS IT WILL BE THE FIRST NODE OF LINKED LIST AFTER DELETION
		(C) DELETE THE TEMP NODE
	*/
	void delete_first() {
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}
	
	/*
	2.2.. DELETION AT THE END
	*/
	void delete_last() {
		node *current = new node;
		node *previous = new node;
		current = head;
		while (current->next != NULL) {
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}

	/*
	2.3.. DELETION AT A PARTICULAR POSITION
	*/
	void delete_position(int pos) {
		node *current = new node;
		node *previous = new node;
		current = head;
		for (int i = 1; i < pos; i++) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
	}
};

int main()
{
	struct V;

	return 0;
}

