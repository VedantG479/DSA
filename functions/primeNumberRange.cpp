#include<iostream>
using namespace std;
void primes(int start, int end){
    for(int i=start; i<=end; i++){
        int factor = 0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                factor = 1;
                break;
            }
        }
        if(factor==0){
            cout<<i;
        }
    }
    return;
}
int main(){
    int n1, n2;
    cout<<"Enter start and end:";
    cin>>n1>>n2;
    primes(n1,n2);
    return 0;
}