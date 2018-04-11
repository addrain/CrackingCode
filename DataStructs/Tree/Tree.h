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
    void removeHelper(nodePtr delNode);
    nodePtr fetchNode(nodePtr parent, int data);
public:
    Tree();
    void insert(int data);
    void remove(int data);
    void print();
};

#endif