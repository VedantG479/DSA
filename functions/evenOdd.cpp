#include<iostream>
using namespace std;
void evenOdd(int a){
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    evenOdd(num);
    return 0;
}