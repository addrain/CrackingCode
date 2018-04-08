#ifndef TREE_H
#define TREE_H

class Tree{
private:
    typedef struct node{
        int data;
        node* left;
        node* right;
    }* nodePtr;

    nodePtr root;
    nodePtr curr;

    void printHelper(nodePtr parent);
public:
    Tree();
    void insert(int data);
    void print();
};

#endif