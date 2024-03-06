#include<iostream>
using namespace std;
bool checkPrime(int n, int i){
    if(n<=2)    return n==2;
    if(n%i==0)  return false;
    if(i*i>n)   return  true;

    return checkPrime(n,i+1);
}
int main(){
    if(checkPrime(15,2)){
        cout<<"Prime";
        return 0;
    }
    cout<<"Not Prime";
    return 0;
}