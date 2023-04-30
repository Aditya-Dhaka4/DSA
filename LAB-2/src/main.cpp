#include "ArrayStack.h"
#include "LinkedListStack.h"
#include<iostream>
using namespace std;

int main(){
    cout<<"ARRAY STACK IMPLEMENTATION"<<endl;
Stack *s=new ArrayStack();
s->push(3);
s->push(4);
s->push(5);
s->push(6);
s->display();
cout<<endl;
cout<<"popped: "<<s->pop()<<endl;
s->display();
cout<<endl;
cout<<"top: "<<s->top();
cout<<endl;
cout<<"LINKED LIST STACK IMPLEMENTATION"<<endl;
Stack *ls=new LinkedListStack();
ls->push(14);
ls->push(15);
ls->push(16);
ls->push(17);
ls->display();
cout<<"popped: "<<ls->pop();
cout<<endl;
ls->display();
cout<<"Top: "<<ls->top()<<endl;
ls->push(18);
ls->push(19);
ls->display();
//Adding element even though maz size reached
cout<<"pushing even though size is maxed: ";
ls->push(20);  
}