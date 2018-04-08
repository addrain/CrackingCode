#include <cstdlib>
#include <iostream>

#include "Tree.h"

using namespace std;

int main(int argc, char** argv){
    cout << "Ran at all\n";
    Tree test;
    cout << "Ran again\n";
    test.insert(9);
    test.insert(10);
    test.insert(1);
    test.insert(5);

    test.print();
}