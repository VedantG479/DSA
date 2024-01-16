#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 1;
    while(ans<=n){
        n = n^ans;
        ans = ans<<1;
    }
    cout<<n;
    return 0;
}