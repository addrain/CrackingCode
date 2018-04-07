#include <cstdlib>
#include <iostream>

#include "Stack.h"

using namespace std;

Stack::Stack(){
    top = NULL;
}

void Stack::pop(){
    if(top == NULL){
        cout << "Empty Stack" << endl;
    }else{
        cout << top->data << " was popped\n";
        top = top->next;
    }
}
void Stack::push(int data){
    nodePtr n = new node;
    n->data = data;
    if(top==NULL){
        top = n;
    }else{
        n->next = top;
        top = n;
    }
}
int Stack::peek(){
    if(top==NULL){
        cout << "Empty Stack" << endl;
        return -1;
    }else{
        return top->data;
    }
}
bool Stack::isEmpty(){
    return top == NULL;
}