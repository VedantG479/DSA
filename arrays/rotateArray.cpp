#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element";
        cin>>nums[i];
    }
    int k;
    cout<<"Enter steps:";
    cin>>k;

    reverse(nums.begin(), nums.begin()+n-k);
    reverse(nums.begin()+n-k,nums.end());
    reverse(nums.begin(),nums.end());

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}