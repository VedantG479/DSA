#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a number: ";
    cin>>num1;
    if(num1%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}