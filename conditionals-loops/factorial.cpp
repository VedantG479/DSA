#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter a number";
    cin>>n;
    while(n>0){
        product *= n;
        n--;
    }
    cout<<product;
    return 0;
}