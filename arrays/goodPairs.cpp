#include<iostream>
using namespace std;
int numberGood(vector<int>& nums){
    int count = 0;
    for(int i=0; i<nums.size()-1; i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums;
    int size;
    cout<<"Enter number:";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element";
        cin>>element;
        nums.push_back(element);
    }
    cout<<numberGood(nums);
    return 0;
}