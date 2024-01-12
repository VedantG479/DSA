#include<iostream>
using namespace std;
bool checkPrime(int num){
    if(num==1)
        return false;
    else if(num==2)
        return true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime)
        cout<<"Prime";
    else    
        cout<<"Not Prime";
    return 0;
}