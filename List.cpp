#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(int addData){
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL){
        curr = head;
        //sets the current node to the newly added node
        while (curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }else{
        head = n;
    }
}

void List::DeleteNode(int delData){
    nodePtr delPtr = NULL;
    
    temp = head;
    curr = head;

    //searched for delData until end of list
    while(curr->next != NULL && curr->data != delData){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << "Data " << delData << " not found" << endl;
        delete delPtr;
    } else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "Data " << delData << " deleted." << endl;
    }
}

void List::PrintList(){
    curr = head;
    while (curr->next != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << curr->data << " ";
    cout << endl;
}