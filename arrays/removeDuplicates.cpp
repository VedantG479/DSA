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
    int count = 0, k=0;
    for(int j=1; j<n; j++){
        if(nums[k]==nums[j]){
            count++;
        }
        else{
            swap(nums[k+1],nums[j]);
            k++;
        }
    }
    cout<<n-count<<endl;
    for(int j=0; j<n; j++){
        cout<<nums[j]<<" ";
    }
    return 0;
}