#ifndef QUEUE_H
#define QUEUE_H

class Queue{
private:
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr bottom;
    nodePtr curr;
    nodePtr temp;
public:
    Queue();
    void add(int data);
    void remove();
    int peek();
    bool isEmpty();
};

#endif