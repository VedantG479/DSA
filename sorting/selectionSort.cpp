#include<iostream>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(64);
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(22);
    nums.push_back(11);

    for(int i=0; i<nums.size()-1; i++){
        int minIndex = i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]<nums[minIndex])  minIndex = j;
        }
        swap(nums[minIndex],nums[i]);
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}