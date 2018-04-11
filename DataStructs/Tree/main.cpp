#include <cstdlib>
#include <iostream>

#include "Tree.h"

using namespace std;

int main(int argc, char** argv){
    Tree test;
    
    test.insert(9);
    test.insert(10);
    test.insert(1);
    test.insert(5);
    test.insert(10);

    test.remove(10);
    test.remove(99);

    test.print();
}