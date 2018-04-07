#include <cstdlib>
#include <iostream>

#include "Queue.h"

using namespace std;

Queue::Queue(){
    bottom = NULL;
    curr = NULL;
    temp = NULL;
}

void Queue::add(int data){
    nodePtr n = new node;
    n->data = data;
    n->next = NULL;
    if(bottom == NULL){
        bottom = n;
    }else{
        curr = bottom;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
}
void Queue::remove(){
    if(bottom != NULL){
            nodePtr delNode = bottom;
            cout << "Node " << delNode->data << " deleted\n";
            bottom = bottom->next;
            delete delNode;
    }else{
        cout << "Empty Queue\n";
    }
}
int Queue::peek(){
    if(bottom != NULL)
        return bottom->data;
    else   
        return -1;
}
bool Queue::isEmpty(){
    return bottom == NULL;
}