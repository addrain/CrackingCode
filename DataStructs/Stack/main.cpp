#include <cstdlib>
#include <iostream>

#include "Stack.h"

using namespace std;

int main(int argc, char** argv){
    Stack test;
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    
    test.pop();
    cout << test.peek() << endl;
    cout << test.isEmpty() << endl << endl;

    test.pop();
    cout << test.peek() << endl;
    cout << test.isEmpty() << endl << endl;

    test.pop();
    cout << test.peek() << endl;
    cout << test.isEmpty() << endl << endl;

    test.pop();
    cout << test.peek() << endl;
    cout << test.isEmpty() << endl << endl;

    test.pop();
    cout << test.peek() << endl;
    cout << test.isEmpty() << endl << endl;
}