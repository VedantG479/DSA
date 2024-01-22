#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<int> count(26,0);
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            count[s[i]-'a']++;
        }
        else{
            count[s[i]-'A']++;
        }
    }
    int max = 0;
    for(int i=0; i<count.size(); i++){
        if(count[i]>=count[max]){
            max = i;
        }
    }
    cout<<char(max+'a');
    return 0;
}