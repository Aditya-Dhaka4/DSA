#include "LinkedList.h"
#include "Stack.h"
//#include "ArrayStack.h"
#include <iostream>
using namespace std;

int main(){
//IMPLEMENTING LINKEDLIST
cout<<"IMPLEMENTING LINKED LIST"<<endl;
LinkedList l;
l.addToHead(5);
l.addToHead(4);
l.addToHead(3);
l.addToHead(2);
l.addToHead(1);
cout<<"Elements in linked list : "<<endl;
l.traverse();
l.removeFromHead();
cout<<"Removing from head"<<endl;
l.traverse();
l.remove(2);
l.addToHead(14);
cout<<"ELEMENTS: "<<endl;
l.traverse();
// ArrayStack arr;
// arr.push(14);
// arr.push(15);
// arr.push(16);
// cout<<arr.pop()<<endl;
// arr.display();

}