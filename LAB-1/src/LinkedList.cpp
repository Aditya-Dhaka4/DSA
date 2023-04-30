#include "LinkedList.h"
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

LinkedList::LinkedList(){
        HEAD=NULL;
        TAIL=NULL;

}

//TO CHECK IF LINKEDLIST IS EMPTY OR NOT

bool LinkedList::isEmpty(){
if(HEAD==NULL && TAIL==NULL){
    return true;
}
else{
    return false;
}

}

//ADD A NODE TO HEAD

void LinkedList::addToHead(int data){
      Node *newNode=new Node;
      newNode->info=data;
      newNode->next=HEAD;
      HEAD=newNode;

        if(TAIL==NULL){

            TAIL=HEAD;
        }
}


//ADDING A NODE TO TAIL

void LinkedList::addToTail(int data){
         Node *newNode=new Node();
         newNode->info=data;
         newNode->next=NULL;
    if(HEAD==NULL){
        HEAD=TAIL=newNode;
    }     
    else{
        TAIL->next=newNode;
        TAIL=newNode;
    }


}

//Inserts an element after the given predecessor node

void LinkedList::add(int data, Node *pred){
 Node *newNode=new Node();
 newNode->info=data;
 newNode->next=pred->next;
 pred->next=newNode;

}

//DELETE HEAD NODE
void LinkedList::removeFromHead()
{
    if(HEAD!=NULL)
    {
        Node* nodeToDelete = new Node();
        nodeToDelete = HEAD;
        int data = HEAD->info;
        HEAD = HEAD-> next;
        delete nodeToDelete;
    }

    if(isEmpty()){
        cout<<"Underflow ";
    }
}

//DELETE TAIL NODE

void LinkedList::removeFromTail()
{
    if(TAIL!=NULL)
    {

        Node* nodeToDelete = new Node();
        nodeToDelete = TAIL;
        if(HEAD == TAIL)
        {
            HEAD = TAIL = NULL;
        }

        else{

        Node* predecessor = new Node();
        predecessor = HEAD;
        
        while ( predecessor->next !=TAIL)
        {
            predecessor = predecessor->next;
        }
        
        TAIL = predecessor;
        predecessor->next = NULL;

        }
         delete nodeToDelete;

    }

}

//REMOVE A NODE

void LinkedList::remove(int data)
{
    if(HEAD!= NULL)
    {
        if(HEAD->info ==data)
        {
            removeFromHead();
        }

        else
        {
            Node* nodeToDelete = new Node();
            nodeToDelete = HEAD->next;

            Node* predecessor = new Node();
            predecessor = HEAD;

            
           while (nodeToDelete!=NULL)
           {
            if(nodeToDelete->info == data)
            {   
            break;
            }
            predecessor =nodeToDelete;
            nodeToDelete = nodeToDelete->next;
           }

           if ((nodeToDelete != NULL))
           {
                predecessor->next = nodeToDelete ->next;
                delete nodeToDelete;

                if(predecessor->next ==NULL)
                {
                    TAIL = predecessor;
                }

           }
                 
        }
        
    }
}

//RETRIEVE

Node* LinkedList::retrieve(int data){
    for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		if (temp->next->info == data)
        {
            return temp->next;
        }
	}
}

//SEARCHING DATA IS PRESENT OR NOT

bool LinkedList::search(int data){
    bool isDataFound = false;
    for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		if(temp->info == data){
            isDataFound = true;
        }
	}
    return isDataFound;
}

//TRAVERSING
void LinkedList::traverse(){
	for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		cout<<temp->info<<endl;
	}

	cout<<endl;
}