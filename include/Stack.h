#ifndef Stack_h
#define Stack_h

class Stack{
public:
    Stack(){};
    ~Stack(){};
    virtual void push(int item)=0;
    virtual int pop()=0;
    virtual int top()=0;
    virtual bool isEmpty()=0;
virtual bool isFull()=0;
virtual void display()=0;
};

#endif