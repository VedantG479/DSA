#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter negative number:";
    cin>>n;

    int negNum = ~n + 1;
    int ans = 0, count = 0;
    while(negNum>0){
        int bit = negNum & 1;
        ans += bit*pow(10,count);
        negNum = negNum >> 1;
        count++;
    }
    cout<<ans;
    return 0;
}