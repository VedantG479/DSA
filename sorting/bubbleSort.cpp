#include<iostream>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(64);
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(22);
    nums.push_back(11);

    for(int i=1; i<nums.size(); i++){
        bool swapped = false;
        for(int j=0; j<nums.size()-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if(!swapped)    break;
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}