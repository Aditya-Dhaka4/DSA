#ifndef LinkedListStack_h
#define LinkedListStack_h
#include "Stack.h"
#define Max_Stack_Size 5
class Node{
	public:
	int info;
	Node* next;
		Node();
		Node(int info,Node* next);

};

class LinkedListStack:public Stack {
public:
LinkedListStack();
Node *topPtr;
int size;
int data[Max_Stack_Size];
bool isEmpty();
bool isFull();
void push(int item);
int pop();
int top();
void display();

};

#endif