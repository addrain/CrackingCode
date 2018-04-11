#include <cstdlib>
#include <iostream>

#include "Tree.h"

using namespace std;

Tree::Tree(){
    root = NULL;
}

void Tree::insert(int data){
    if(fetchNode(root, data) != NULL){
        cout << data << " ALREADY EXISTS\n";
        return;
    }
    nodePtr n = new node;
    n->right = NULL;
    n->left = NULL;
    n->data = data;
    if(root == NULL){
        root = n;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "Root made\n";
    }else{
        curr = root;
        while(true){
            if(data < curr->data){
                if(curr->left == NULL){
                    //cout << "left was null\n";
                    curr->left = n;
                    curr->left->parent = curr;
                    break;
                }else{
                    //cout << "left was not null\n";
                    curr = curr->left;
                }
            }else{
                if(curr->right == NULL){
                    //cout << "right was null\n";
                    curr->right = n;
                    curr->right->parent = curr;
                    break;
                }else{
                    //cout << "right was not null with: " << curr->right->data << "\n";
                    curr = curr->right;
                }
            }
        }
    }
}

Tree::nodePtr Tree::fetchNode(nodePtr parent, int data){
    if(parent == NULL)
        return NULL;
    fetchNode(parent->left, data);
    if(parent->data == data){
        cout << "Data found: " << parent->data << endl;
        return parent;
    }
    fetchNode(parent->right, data);
}
void Tree::removeHelper(nodePtr delNode){
    if(delNode == NULL)
        return;
    if(delNode->parent == NULL){
        cout << "REMOVING ROOT (NOT REALLY)\n";
        return;
    }
    if(delNode->left == NULL && delNode->right == NULL){
        cout << "Parent of " << delNode->data << " is " << delNode->parent->data << endl;
        if(delNode->parent->right == delNode){
            delNode->parent->right = NULL;
            cout << "IS RIGHT NODE\n";
        }else{
            delNode->parent->left = NULL;
            cout << "IS LEFT NODE\n";
        }
    }
    //check for three remove cases here.  implement later.
}
void Tree::remove(int data){
    if(root == NULL)
        return;
    nodePtr delNode;
    delNode = fetchNode(root, data);
    removeHelper(delNode);

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
    cout << endl;
}