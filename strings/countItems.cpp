#include<iostream>
using namespace std;
int main(){
    vector<vector<string> > items(3,vector<string> (3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>items[i][j];
        }
    }

    string ruleKey;
    cout<<"Enter rulekey:";
    cin>>ruleKey;

    string ruleValue;
    cout<<"Enter rulevalue:";
    cin>>ruleValue;

    int count = 0, i=0;
    if(ruleKey == "type") i=0;
    if(ruleKey == "color") i=1;
    if(ruleKey == "name") i=2;
    for(int j=0; j<3; j++){
        if(items[j][i]==ruleValue)
            count++;
    }

    cout<<count;
    return 0;
}