#include"LinkedListStack.h"
#include<iostream>
using namespace std;

Node::Node()
{
     info=0;
     next=NULL;
}

Node::Node(int info,Node* next){
	this->info = info;
	this->next = next;
}

LinkedListStack::LinkedListStack(){
        topPtr=NULL;
        size=0;

}

bool LinkedListStack::isEmpty(){
        if (topPtr==NULL)
        return true;
        else return false;
}

bool LinkedListStack::isFull(){
if(size==Max_Stack_Size){
        return true;
}
else return false;

}

void LinkedListStack::push(int item){
if(isFull()){
        cout<<"Stack overflow"<<endl;
}
else{
       Node* newNode=new Node;
       newNode->info=item;
       newNode->next=topPtr;
       topPtr=newNode;
       size++;

}

}

int LinkedListStack::pop(){
if(isEmpty()){
        cout<<"Stack underflow"<<endl;
}
else{
        int item=topPtr->info;
        Node *temp=topPtr;
        topPtr=topPtr->next;
        delete temp;
        size--;
        return item;

}

}

int LinkedListStack::top(){
        return topPtr->info;
}

void LinkedListStack::display() {
    if (topPtr == NULL) {
        cout << "Stack is empty" <<endl;
    } else {
        cout << "Stack contents: ";
        Node* temp = topPtr;
        while (temp != NULL) {
            std::cout << temp->info << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}