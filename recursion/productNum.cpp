#include<iostream>
using namespace std; 
int prod(int a, int b){
    if(b==0)    return 0;
    if(b==1)    return a;
    return a + prod(a,b-1);
}
int main(){
    cout<<prod(5,100);
    return 0;
}