#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter main string:";
    getline(cin,s);
    string part;
    cout<<"Enter substring:";
    cin>>part;

    while(s.find(part)!=-1){
        s.erase(s.find(part),part.length());
    }
    cout<<s;
    return 0;
}