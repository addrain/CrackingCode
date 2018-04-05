/**
 * Adrian Kwok
 *
 * String Compression: Implement a method to perform basic string compression 
 * using the counts of repeated characters. For examples, the string aabcccccaaa
 * would become a2b1c5a3. If the "compressed" string would not become smaller than
 * the original string, your method should return the original string. You can 
 * assume the string has only uppercase and lowercase letters (a-z).
 */
#include <iostream>
#include <string>
#include <sstream> //for ostringstream used to append whole integers

using namespace std;

/* Testing out ostream function ostringstream
int main(){
    ostringstream oss;
    string hello = "hello";
    int foo = 983;
    oss << foo;
    hello += oss.str();
    cout << hello;
}
*/

/*
int main(){
    string str;
    string compressed;
    int count = 1;
    int index2 = 0;
    bool shorter = true;
    cout << "Input a word to compress: ";
    cin >> str;

    compressed = str;
    for(int i = 0; i <= str.length(); i++){
        if(index2 >= str.length()-1){
            cout << str << endl;
            shorter = false;
            break;
        }
        if(i == 0){
            index2++;
        }else if(str[i] == str[i-1]){
            count++;
        }else{
            if(count >= 10){    //flaw, if count is greater than or equal to 100, it won't produce correct output
                compressed[index2] = (count/10)+48;
                index2++;
                compressed[index2] = count - ((count/10)*10) + 48;
            }else{
                compressed[index2] = count+48;
            }
            index2++;

            count = 1;
            compressed[index2] = str[i];
            index2++;
        }
    }
    compressed.erase(index2, str.length());
    if(shorter)
        cout << compressed << endl;
}
*/

int main(){
    ostringstream oss;
    string str;
    string compressed = "";
    int count = 1;
    cout << "Input a word to compress: ";
    cin >> str;

    for(int i = 0; i <= str.length(); i++){
        if(i == 0){
            compressed += str[i];
        }else if(str[i] == str[i-1]){
            count++;
        }else{
            oss << count;
            compressed += oss.str();
            oss.str("");    //clears the buffer
//            oss.clear();    //clears any error flags (optional if no error flags are set)
            count = 1;
            compressed += str[i];
        }
    }
    if(compressed.length()-1 < str.length()){
        cout << compressed << endl;
    }else{
        cout << str << endl;
    }
}