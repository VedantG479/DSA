#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int lcm = num1*num2;
    for(int i = max(num1,num2); i<=lcm; i++){
        if(i%num1==0 && i%num2==0){
            lcm = i;
            break;
        }
    }
    cout<<lcm;
    return 0;
}