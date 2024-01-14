#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Element:";
        cin>>nums[i];
    }
    int even = 0, odd = 0;
    for(int i=0; i<n; i++){
        if(nums[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<min(odd,even);
    return 0;
}