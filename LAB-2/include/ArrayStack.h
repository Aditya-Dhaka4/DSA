#ifndef ArrayStack_h
#define ArrayStack_h
#define MAX_STACK_SIZE 5
#include "Stack.h"
class ArrayStack:public Stack{
    public:
ArrayStack();
~ArrayStack();
void push(int item);
int pop();
int top();
bool isEmpty();
bool isFull();
void display();
private:
int data[MAX_STACK_SIZE];
int topIndex;

};





#endif