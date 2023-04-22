#include "ArrayStack.h"
#include "Stack.h"
#include <iostream>
using namespace  std;
 
 ArrayStack::ArrayStack(){
    topIndex=-1;
 }

 ArrayStack::~ArrayStack(){}

 bool ArrayStack::isEmpty(){

    if(topIndex==-1){
        return true;
    }
    else return false;
 }

 bool ArrayStack::isFull(){

    if(topIndex==MAX_STACK_SIZE-1){
        return true;
    }
    else return false;
 }

 void ArrayStack::push(int item){
if(isFull()){
    cout<<"Overflow"<<endl;
}
else{
    topIndex++;
    data[topIndex]=item;
}

 }

 int ArrayStack::pop(){
if(isEmpty()){
    cout<<"underflow"<<endl;
}
else{
    return data[topIndex--];
}

 }

 int ArrayStack::top(){
     if(isEmpty()){
        cout<<"underflow"<<endl;
     }
     else{
        return data[topIndex];
     }

 }

 void ArrayStack::display(){
    cout<<"\nELEMENTS: ";
    if (!isEmpty())
    {
    for (int i = 0; i <= topIndex; i++)
    {
        cout<<data[i]<<" ";
    }
    
    }
    
    
}