/**
 * Adrian Kwok
 *
 * Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palinedrome.
 * A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearragement of letters.
 * The palindrome does not need to be limited to just dictionary words.
 * 
 * Example
 * Input:   Tact Coa
 * Output:  True (permutations: "taco cat", "atco cta", etc.)
 */
#include <iostream>
#include <string>
#include <locale> //for tolower
#include <algorithm> //to remove spaces

using namespace std;

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

bool checkPal(string str){
    string reference;
    int backStart;
    int refLastIndex;
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    reference = str.substr(0, str.length()/2);
    
    refLastIndex = reference.length()-1;

    if(str.length() % 2 == 0){
        backStart = str.length()/2;
    }else{
        backStart = str.length()/2+1;
    }
    for(int i = backStart; i < str.length(); i++){
        if(str[i] != reference[refLastIndex])
            return false;
        refLastIndex--;
    }
    return true;
}

int main(){
    string str1 = "Race Rac";
    string str2 = "Ra cecar";
//    string str2 = "atco tac";
    
    for(int i = 0; i < str1.length(); i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());

    if(checkPerm(str1, str2)){
        if(checkPal(str2)){
            cout << "Is a palindrome permutation" << endl;
        }else{
            cout << "Not a palindrome permutation" << endl;
        }
    }else{
        cout << "Not a palindrome permutation" << endl;
    }
    return 0;
}