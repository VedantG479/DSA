#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string";
    cin>>s;
    int start = 0, end = s.length()-1;
    while(start<end){
        if(s[start++]!=s[end--]){
            cout<<"Not a palondrome";
            return 0;
        }
    }
    cout<<"Palidrome";
    return 0;
}