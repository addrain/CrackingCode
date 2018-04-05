/**
 * Adrian Kwok
 *
 * Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
*/
#include <iostream>
#include <string>
#include <algorithm> //for sorting

using namespace std;
/**
 * WRONG: Because "abc" and "aad" return true
bool checkPerm(string str1, string str2){
    int sum1 = 0;
    int sum2 = 0;
    if(str1.length() != str2.length())
        return false;
    for(int i = 0; i < str1.length(); i++){
        sum1 += str1[i];
        sum2 += str2[i];
    }
    if(sum1 != sum2)
        return false;
    return true;
    
}
*/

/**
 * CORRECT
bool checkPerm(string str1, string str2){
    if(str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}
*/

// CORRECT
bool checkPerm(string str1, string str2){
    if(str1.length() != str2.length())
        return false;

    int asciiArr[256];
    for(int i = 0; i < 256; i++){
        asciiArr[i] = 0;
    }
    for(int i = 0; i < str1.length(); i++){
        asciiArr[str1[i]]++;
    }
    for(int i = 0; i < str2.length(); i++){
        asciiArr[str2[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(asciiArr[i] != 0)
            return false;
    }
    return true;
}


int main(){
    string str1;
    string str2;
    cout << "enter string1: ";
    cin >> str1;
    cout << "enter string2: ";
    cin >> str2;

    if(checkPerm(str1, str2)){
        cout << "Permutation: YES" << endl;
    }else{
        cout << "Permutation: NO" << endl;
    }
    return 0;
}