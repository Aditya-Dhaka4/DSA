#ifndef LinkedListQueue_h
#define LinkedListQueue_h
#include "Queue.h"
#include "LinkedList3.h"


class LinkedListQueue:public Queue{

    Node* FRONT;
    Node* REAR;
    LinkedList *list = new LinkedList;
    public:
    LinkedListQueue();
    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();
};
#endif