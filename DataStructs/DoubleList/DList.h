#ifndef DLIST_H
#define DLIST_H

class DList{
private:
    typedef struct node{
        int data;
        node* next;
        node* prev;
    }* nodePtr;

    nodePtr head;
    nodePtr tail;
    nodePtr curr;
    nodePtr temp;

public:
    DList();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
    void PrintBackwards();
};

#endif