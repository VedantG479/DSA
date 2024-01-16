#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 0, count = 0; 
    while(n>0){
        ans += (n%2)*pow(10,count++);
        n = n/2;
    }
    cout<<ans;
    return 0;
}