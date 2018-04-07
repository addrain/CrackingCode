#include <cstdlib>
#include <iostream>

#include "Queue.h"

using namespace std;

int main(int argc, char** argv){
    Queue test;

    cout << test.isEmpty() << endl;
    cout << test.peek() << endl;
    test.add(1);
    cout << test.peek() << endl;
    //test.remove();
    test.add(2);
    test.remove();
    cout << test.isEmpty() << endl;

    test.add(3);
    cout << test.peek() << endl;
    test.remove();

    test.remove();
    test.add(4);
    test.add(5);
    cout << test.peek() << endl;
    test.remove();
    test.remove();

    cout << test.isEmpty() << endl;
}