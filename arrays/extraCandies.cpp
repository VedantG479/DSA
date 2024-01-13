#include<iostream>
using namespace std;
vector<bool> find(vector<int>& nums, int extra){
    vector<bool> ans;
    int max = nums[0];
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }
    for(int i=0; i<nums.size(); i++){
        if(nums[i]+extra > max){
            ans.push_back(true);
        }
        else{
            ans.push_back(false);
        }
    }
    return ans;
}
int main(){
    int extraCandies; 
    cout<<"Enter extra candies:";
    cin>>extraCandies;
    vector<int> arr;
    int size;
    cout<<"Enter number: ";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element:";
        cin>>element;
        arr.push_back(element);
    }

    vector<bool> ans = find(arr,extraCandies);
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" "; 
    }

    return 0;
}