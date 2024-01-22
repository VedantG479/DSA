#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;

    vector<int> alphabetsCount(26,0);
    for(int i=0; i<s.length(); i++){
        alphabetsCount[s[i]-'a']++;
    }

    int index = 0;
    for(int i=0; i<alphabetsCount.size(); i++){
        while(alphabetsCount[i]--){
            s[index] = i+'a';
            index++;
        }    
    }

    cout<<s;

    return 0;
}