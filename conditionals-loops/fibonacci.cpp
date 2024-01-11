#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n; i++){
        int temp = b;
        b = a+b;
        a = temp;
        cout<<b<<" ";
    }
    return 0;
}