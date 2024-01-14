#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>nums[i];
    }
    int target;
    cout<<"enter target:";
    cin>>target;

    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    vector<int> ans;
    int lowestIndex = -1, highestIndex = -1; 
    while(start<=end){
        if(nums[mid]==target){
            lowestIndex = mid;
            end = mid - 1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    ans.push_back(lowestIndex);
    start = 0;
    end = n-1;
    while(start<=end){
        mid = start + (end-start)/2;
        if(nums[mid]==target){
            highestIndex = mid;
            start = mid + 1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    ans.push_back(highestIndex);

    cout<<ans[0]<<" "<<ans[1];
    return 0;
}