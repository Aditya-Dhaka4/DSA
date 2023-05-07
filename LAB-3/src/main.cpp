#include "ArrayQueue.h"
#include "LinkedListQueue.h"

int main(){
    ArrayQueue queue;
cout<<"IMPLEMENTING ARRAY QUEUE "<<endl;
//dequeueing even though queue is empty
queue.dequeue();
    //Enqueueing the elements
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    //Enqueuing even though queue is full
    queue.enqueue(7);
    cout<<endl;

    //Dequeueing the elements
    queue.dequeue();
    queue.dequeue();
    
    //Elements at front and back
    cout<<"Front:"<<queue.getBack()<<endl;
    cout<<"Back:"<<queue.getFront()<<endl;

cout<<"LINKED LIST IMPLEMETATION"<<endl;
    LinkedListQueue *linkedQueue = new LinkedListQueue();
    

    //Enqqueuing the elements
    linkedQueue->enqueue(1);
    linkedQueue->enqueue(2);
    linkedQueue->enqueue(3);
    linkedQueue->enqueue(4);
    linkedQueue->enqueue(5);
    //Dequeuing the elements
    cout<<"Element dequeued: "<<linkedQueue->dequeue()<<endl;
    cout<<"Element dequeued: "<<linkedQueue->dequeue()<<endl;


    //Elements at front and back
    cout<<"Front: "<<linkedQueue->getFront()<<endl;;
    cout<<"Back: "<<linkedQueue->getBack()<<endl;;


}