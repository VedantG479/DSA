#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter a number:";
    cin>>n1;
    int temp = n1, sum = 0;
    while(n1>0){
        sum += pow((n1%10),3);
        n1 /= 10;
    }
    if(sum == temp){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}