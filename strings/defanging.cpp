#include<iostream>
using namespace std;
int main(){
    string address;
    cout<<"enter address: ";
    cin>>address;

    for(int i=0; i<address.length(); i++){
        if(address[i]=='.'){
            address.insert(i++,"[");
            i++;
            address.insert(i++,"]");
        }
    }

    cout<<address;
    return 0;
}