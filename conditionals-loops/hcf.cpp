#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int hcf = 1;
    for(int i=1; i<=min(num1,num2); i++){
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    }
    cout<<hcf;
    return 0;
}