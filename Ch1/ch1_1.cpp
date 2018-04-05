/**
 * Adrian Kwok
*/

#include <iostream>
#include <string>

using namespace std;

bool checkInput(string input){
    int asciiCheck[256];
    int i = 0;
    for(i = 0; i < 256; i++){
        asciiCheck[i] = 0;
    }
    for(i = 0; i < input.length(); i++){
        if(asciiCheck[input[i]] == 1){
            return false;
        }
        asciiCheck[input[i]] = 1;
    }
    return true;
}

int main(){
    string input;

    cout << "Input a word to see if there are unique chars: ";
    cin >> input;
    //cout << endl;

    if(checkInput(input)){
        cout << "All unique chars" << endl;
    }else{
        cout << "Not unique chars" << endl;
    }
}