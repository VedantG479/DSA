#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 0, count = 0;

    while(n>0){
        ans += (n%10)*pow(2,count++);
        n /= 10;
    }
    cout<<ans;
    return 0;
}