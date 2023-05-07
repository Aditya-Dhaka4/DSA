#ifndef Queue_h
#define Queue_h
#include <iostream>
using namespace std;


class Queue
{
public:
    virtual void enqueue(int element)=0;
    virtual int dequeue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    virtual int getFront()=0;
    virtual int getBack()=0;

};

#endif