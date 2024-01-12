#include<iostream>
using namespace std;
void fact(int num){
    int a = 0, b = 1;
    if(num==1){
        cout<<a;
        return;
    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=2; i<num; i++){
            int temp = b;
            b = a + b;
            a = temp;
            cout<<b<<" ";
        }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    fact(n);
    return 0;
}