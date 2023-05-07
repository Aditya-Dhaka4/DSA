#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H
#include "Queue.h"
#define MAX_QUEUE_SIZE 5
class ArrayQueue:public Queue{
    int array[MAX_QUEUE_SIZE];
    int front,rear;
    public:
    ArrayQueue();
    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();
};

#endif