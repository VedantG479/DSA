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
        int compare = nums[i];
        int j = i - 1;
        for(; j>=0; j--){
            if(nums[j] > compare)    nums[j+1] = nums[j];
            else    break;
        }
        nums[j+1] = compare;
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}