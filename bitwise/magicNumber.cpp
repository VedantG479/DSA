#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0, count = 1; 

    while(n>0){
        if((n&1) == 1){
            ans += pow(5,count);
        }
        count++;
        n = n>>1;
    }

    cout<<ans;
    return 0;
}