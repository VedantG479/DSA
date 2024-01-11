#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    char oper;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"Enter operation from + - * /";
    cin>>oper;
    switch(oper){
        case '+' : cout<<num1 + num2;
        case '-' : cout<<num1 - num2;
        case '*' : cout<<num1 * num2;
        case '/' : cout<<num1 / num2;
    }
    return 0;
}