#include<iostream>
using namespace std;
void insertion(vector<int> &nums, int index, int size){
    if(index==size) return;

    int compare = nums[index];
    int j = index - 1;
    for(; j>=0; j--){
        if(nums[j] > compare)    nums[j+1] = nums[j];
        else    break;
    }
    nums[j+1] = compare;
    insertion(nums,index+1,size);
}
int main(){
    vector<int> nums;
    nums.push_back(64);
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(22);
    nums.push_back(11);

    insertion(nums,1,nums.size());

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}