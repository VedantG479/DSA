#include<iostream>
using namespace std;
void printTriangles(vector<int> nums, int n){
    if(n==1){
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        return;
    }

    vector<int> ans;
    for(int i=1; i<n; i++){
        ans.push_back(nums[i] + nums[i-1]);
    }
    printTriangles(ans,n-1);

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    int n = nums.size();
    printTriangles(nums,n);
    return 0;
}