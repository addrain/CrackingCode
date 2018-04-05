/**
 * Adrian Kwok
 *
 * URLify: Wrjite a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the end to hold the additional characters, 
 *      and that you are given the "true" length of the string. (Note: If implementing in Java, please use a character array so that you can perform this operation in place.)
 * 
 * EXAMPLE:
 * Input:   "Mr John Smith    ", 13
 * Output:  "Mr%20John%20Smith"
 */
#include <iostream>
#include <string>

using namespace std;

void urlify(string str, int trueLength){
    int endOfString = trueLength-1;
    for(int i = trueLength; i >= 0; i--){
        if(str[i] == ' '){
            for(int j = endOfString; j > i; j--){
                str[j+2] = str[j];
            }
            str[i] = '%';
            str[i+1] = '2';
            str[i+2] = '0';
            endOfString += 2;
        }
    }
    cout << str << endl;
}

int main(){
    urlify("Mr John Smith    ", 13);
    urlify("Hello, please urlify me!      ", 24);
}