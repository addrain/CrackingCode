#include <cstdlib>
#include <iostream>

#include "DList.h"

using namespace std;

int main(int argc, char** argv){
    DList test;

    test.AddNode(9);
    test.AddNode(10);
    test.AddNode(2);
    test.AddNode(8);
    test.AddNode(21);

    test.PrintList();
    test.PrintBackwards();

    test.DeleteNode(9);

    test.PrintList();
    test.PrintBackwards();
}