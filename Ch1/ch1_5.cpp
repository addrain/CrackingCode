/**
 * Adrian Kwok
 *
 * One Away: There are three types of edits that can be performed on strings:
 *  insert a character,
 *  remove a character,
 *  or replace a character.
 * Given two strings, write a function to check if they are one edit (or zero edits) away.
 * 
 * EXAMPLE:
 *      ple,    pale    -> True
 *      pale,   ple     -> True
 *      pale,   bale    -> True
 *      pale,   bake    -> False
 */
#include <iostream>
#include <string>

using namespace std;

bool checkEdits(string str1, string str2){
    int asciiHash[256];
    int index2 = 0;
    int edits = 0;
    string temp;
    if(str1 == str2)
        return true;
    if(str1.length() >= str2.length()+2 || str1.length() <= str2.length()-2)
        return false;


    //used so I can always refer to str1.length() for shortest length or str2 for longest length
    if(str2.length() < str1.length()){
        temp = str2;
        str2 = str1;
        str1 = temp;
    }
    for(int i = 0; i < str2.length(); i++){
        //cout << str1[i] << " " << str2[index2] << endl;
        if(edits <= 1){
            if(str1[i] != str2[index2]){
                if(str1.length() != str2.length())
                    i--;
                edits++;
            }
            index2++;
        }
        if(edits > 1)
            return false;
    }
    return true;

}

int main(){
    string str1 = "pale";
    string str2 = "pales";

    if(checkEdits(str1, str2)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}