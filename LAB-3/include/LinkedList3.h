#ifndef LINKEDLIST3_h
#include <iostream>

using namespace std;

class Node{
	public:
	int info;
	Node* next;
		Node();
		Node(int info,Node* next);

};

class LinkedList{
	public:
	Node *HEAD;
	Node *TAIL;
		LinkedList();
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		void add(int data, Node *predecessor);
        int removeFromHead();
        int removeFromTail();
		void remove(int data);
		Node* retrieve(int data);
		bool search(int data);
		void traverse();	

};

#endif