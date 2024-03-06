#include<iostream>
using namespace std;
int maxArr(vector<int> nums, int index){
    if(index==nums.size()-1)    return nums[index];
    return max(nums[index], maxArr(nums,index+1));
}
int minArr(vector<int> nums, int index){
    if(index==nums.size()-1)    return nums[index];
    return min(nums[index], minArr(nums,index+1));
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(3);
    nums.push_back(-5);
    nums.push_back(-4);
    nums.push_back(8);
    nums.push_back(6);
    nums.push_back(10);

    cout<<maxArr(nums,0);

    cout<<minArr(nums,0);
}