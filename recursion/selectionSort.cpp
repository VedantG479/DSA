#include<iostream>
using namespace std;
void selection(vector<int> &nums, int index, int size){
    if(index==size-1)   return; 

    int minIndex = index;
    for(int i=index + 1; i<size; i++){
        if(nums[i] < nums[minIndex])    minIndex = i;
    }
    swap(nums[index],nums[minIndex]);

    selection(nums,index+1,size);
}
int main(){
    vector<int> nums;
    nums.push_back(64);
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(22);
    nums.push_back(11);

    selection(nums,0,nums.size());

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}