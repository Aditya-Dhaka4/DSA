#include "ArrayQueue.h"

ArrayQueue::ArrayQueue(){
    front = -1;
    rear = -1;
}

bool ArrayQueue::isEmpty(){
    if (front == -1 && rear == -1)
    {
        
        return true;
    }
    else
    {
        
        return false;
    }
    
    
}
bool ArrayQueue::isFull(){
    if (rear == MAX_QUEUE_SIZE-1)
    {
        
        return true;
    }
    else{
             return false;
    }
    
}

void ArrayQueue::enqueue(int element){
    if(isFull()){
        cout<<"Stack overflow"<<endl;
    }
    else{
if(front==-1){
    front=0;
}
rear++;
array[rear]=element;
cout<<endl;
cout<<"Inserted: "<<element<<endl;

    }
    
}

int ArrayQueue::dequeue(){
    if(!this->isEmpty()){
        int data = array[front];
        front++;
        if(front>rear){
            front = -1;
            rear = -1;
        }
        cout<<"Element dequeued: "<<data<<endl;
        return data;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}


    
int ArrayQueue::getFront(){
    if (!this->isEmpty())
    {
        return array[front];
    }
}

int ArrayQueue::getBack(){
    if (!this->isEmpty())
    {
        return array[rear];
    }
}