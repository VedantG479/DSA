#include<iostream>
using namespace std;
void bubble(vector<int> &nums, int index, int size){
    if(index==size) return;

    bool swapped = false;
    for(int i=0; i<size-index; i++){
        if(nums[i] > nums[i+1]){
            swap(nums[i],nums[i+1]);
            swapped = true;
        }
    }
    if(!swapped)    return;
    bubble(nums,index+1,size);
}
int main(){
    vector<int> nums;
    nums.push_back(64);
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(22);
    nums.push_back(11);

    bubble(nums,1,nums.size());

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}