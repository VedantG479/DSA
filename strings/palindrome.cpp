#include<iostream>
using namespace std;
bool checkIfChar(char ch){
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9'))
        return true;
    return false;
}
char toChar(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
    return ch-'a'+'A'; 
}
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    
    int start = 0, end = s.size()-1;
    while(start<end){
        if(!checkIfChar(s[start])){
            start++;
        }
        else if(!checkIfChar(s[end])){
            end--;
        }
        else{
            if(toChar(s[start])!=toChar(s[end])){
                cout<<"Not Palindrome";
                return 0;
            }
            start++;
            end--;
        }
    }
    cout<<"Palindrome";
    return 0;
}