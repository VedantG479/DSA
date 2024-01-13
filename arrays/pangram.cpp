#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string:";
    cin>>s;
    vector<int> count(26,0);
    for(int i=0; i<s.length(); i++){
        count[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(count[i]==0){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}