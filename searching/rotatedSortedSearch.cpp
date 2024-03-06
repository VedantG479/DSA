#include<iostream>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);

    int target = 0;
    int start = 0, end = nums.size() - 1;
    while(start<end){
        int mid = start + (end - start)/2;
        if(nums[mid] > nums[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }

    if(target > nums[0]){
        start = 0;
        end = start - 1;
    }
    else{
        end = nums.size() - 1;
    }

    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid]==target){
            cout<<"found at:"<<mid;
            return 0;
        }
        else if(nums[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<"not found";
    return 0;
}