#include<iostream>
using namespace std;
int main(){
    int base;
    cin>>base;
    int power;
    cin>>power;

    int ans = 1;
    while(power>0){
        if((power&1)==1){
            ans *= base;
        }
        power = power >> 1;
        base = base*base;
    }
    cout<<ans;
    return 0;
}