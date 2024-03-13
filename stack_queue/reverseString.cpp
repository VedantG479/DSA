#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "sfaishea";

    stack<char> ch;
    for(int i=0; i<s.length(); i++){
        ch.push(s[i]);
    }

    int i=0;
    while(!ch.empty()){
        s[i] = ch.top();
        ch.pop();
        i++;
    }

    cout<<s;
    return 0;
}