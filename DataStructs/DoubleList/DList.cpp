#include <cstdlib>
#include <iostream>

#include "DList.h"

using namespace std;

DList::DList(){
    head = NULL;
    tail = NULL;
    curr = NULL;
    temp = NULL;
}

void DList::AddNode(int addData){
    nodePtr n = new node;
    n->next = NULL;
    n->prev = NULL;
    n->data = addData;

    if(head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
        n->prev = curr;
        tail = n;
    }else{
        head = n;
        tail = n;
    }
}

void DList::DeleteNode(int delData){
    nodePtr delPtr = NULL;
    
    temp = head;
    curr = head;

    //searched for delData until end of list
    while(curr->next != NULL && curr->data != delData){
        temp = curr;
        curr = curr->next;
    }
    if(curr->next == NULL && curr->data != delData){
        cout << "Data " << delData << " not found" << endl;
        delete delPtr;
    } else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(curr != NULL){
            curr->prev = temp;
        }else{
            tail = temp;
        }
        cout << "entered\n";
        if(delPtr == head){
            head = head->next;
            head->prev = NULL;
            temp = NULL;
        }
        delete delPtr;
        cout << "Data " << delData << " deleted." << endl;
    }
}

void DList::PrintList(){
    curr = head;
    while(curr->next != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << curr->data << endl;
}

void DList::PrintBackwards(){
    curr = tail;
    while(curr->prev != NULL){
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << curr->data << endl;
}