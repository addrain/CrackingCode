#include <cstdlib>
#include "List.h"

using namespace std;

int main(int argc, char** argv){
    List test;

    test.AddNode(9);
    test.AddNode(8);
    test.AddNode(1);
    test.AddNode(3);
    test.PrintList();

    test.DeleteNode(10);
    test.PrintList();

    return 0;
}