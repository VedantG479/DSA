#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;

    vector<int> indices;
    for(int i=0; i<s.length(); i++){
        int element;
        cin>>element;
        indices.push_back(element);
    }

    string shuffled = s;
    for(int i=0; i<indices.size(); i++){
        shuffled[indices[i]] = s[i];
    }

    cout<<shuffled;
    return 0;
}