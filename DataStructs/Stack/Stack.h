#ifndef STACK_H
#define STACK_H

class Stack{
private:
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;

    nodePtr top;

public:
    Stack();
    void pop();
    void push(int data);
    int peek();
    bool isEmpty();
};

#endif