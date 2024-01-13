#include<iostream>
using namespace std;
vector<int> smaller(vector<int>& nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]<nums[i]){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}
int main(){
    vector<int> nums;
    int size;
    cout<<"Enter number:";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element: ";
        cin>>element;
        nums.push_back(element);
    }
    vector<int> ans = smaller(nums);
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}