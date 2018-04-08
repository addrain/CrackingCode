#include <cstdlib>
#include <iostream>

#include "Tree.h"

using namespace std;

Tree::Tree(){
    root = NULL;
}

void Tree::insert(int data){
    nodePtr n = new node;
    n->data = data;
    if(root == NULL){
        root = n;
        root->left = NULL;
        root->right = NULL;
        cout << "Root made\n";
    }else{
        curr = root;
        while(true){
            if(data < curr->data){
                if(curr->left == NULL){
                    cout << "left was null\n";
                    curr->left = n;
                    break;
                }else{
                    cout << "left was not null\n";
                    curr = curr->left;
                }
            }else{
                if(curr->right == NULL){
                    cout << "right was null\n";
                    curr->right = n;
                    break;
                }else{
                    cout << "right was not null with: " << curr->right->data << "\n";
                    curr = curr->right;
                }
            }
        }
    }
}
void Tree::printHelper(nodePtr parent){
    if(parent == NULL){
        return;
    }
    printHelper(parent->left);
    cout << parent->data << " ";
    printHelper(parent->right);
}
void Tree::print(){
    printHelper(root);
}