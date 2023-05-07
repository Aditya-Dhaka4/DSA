#include "LinkedListQueue.h"

LinkedListQueue::LinkedListQueue(){
    FRONT = NULL;
    REAR = NULL;
}

bool LinkedListQueue::isEmpty(){
    if (FRONT == NULL && REAR == NULL)
    {
        // cout<<"EMPTY QUEUE"<<endl;
        return true;
    }
    else
    {
        // cout<<"Not Empty QUEUE"<<endl;
        return false;
    }
    
    
}
bool LinkedListQueue::isFull(){

    
}

void LinkedListQueue::enqueue(int element){
    if (list->isEmpty())
    {
        list->addToTail(element);    
        FRONT = list->HEAD;
        REAR = list->HEAD;
        cout<<"Enqueued element:"<<element<<endl;
    }else{
        list->addToTail(element);
        cout<<"Enqueued element:"<<element<<endl;
        REAR = list->TAIL;
    }
    

}

int LinkedListQueue::dequeue(){
    if(!list->isEmpty()){
        int data = list->removeFromHead();
        FRONT = list->HEAD;
        return data;
    }
}


    
int LinkedListQueue::getFront(){
    if(FRONT == NULL){
        cout<<"NULL";
    }
    else{
        return FRONT->info;
    }
}

int LinkedListQueue::getBack(){
    if(REAR == NULL){
        cout<<"NULL";
    }
    else{
        return REAR->info;
    }
}