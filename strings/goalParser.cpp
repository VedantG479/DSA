#include<iostream>
using namespace std;
int main(){
    string command;
    cout<<"enter string:";
    cin>>command;

    string interpreted;
    for(int i=0; i<command.length(); i++){
        if(command[i]=='G')
            interpreted.push_back('G');
        else if(command[i++]=='(' && command[i++]==')')
            interpreted.push_back('o');
        else{
            interpreted.push_back('a');    
            interpreted.push_back('l');
            i += 4;
        }    
    }

    cout<<interpreted;
    return 0;
}