#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans;
    ans.push_back(str[0]);
    for(int i=1; i<str.length(); i++){
        if(ans.empty() || str[i]!=ans.back()){
            ans.push_back(str[i]);
        }
        else{
            ans.pop_back();
        }
    }
    cout<<ans;
    return 0;
}