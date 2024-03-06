#include<iostream>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(8);
    nums.push_back(10);

    int target = 0;
    int start = 0, end = nums.size()-1;
    int firstOccurence = -1, lastOccurence = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid]==target){
            firstOccurence = mid;
            end = mid - 1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    
    start = 0; 
    end = nums.size()-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid]==target){
            lastOccurence = mid;
            start = mid + 1;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<firstOccurence<<" "<<lastOccurence;
    return 0;
}