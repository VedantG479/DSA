#include<iostream>
using namespace std;
void maxNum(int a, int b){
    if(a>b){
        cout<<"Max:"<<a;
    }
    else{
        cout<<"Max:"<<b;
    }
}
void minNum(int a, int b){
    if(a<b){
        cout<<"Min:"<<a;
    }
    else{
        cout<<"Min:"<<b;
    }
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    maxNum(num1,num2);
    minNum(num1,num2);
    return 0;
}
