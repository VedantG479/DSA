#include<iostream>
using namespace std;
void checkPalin(string str){
    int start = 0, end = str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            cout<<"Not Palidrome";
            return;
        }
        start++;
        end--;
    }
    cout<<"Palindrome";
    return;
}
int main(){
    string s;
    cout<<"enter your string:";
    cin>>s;
    checkPalin(s);
    return 0;
}