#include<iostream>
using namespace std;
void findSubset(vector<int>&nums, vector<int>output, vector<vector<int> >&ans, int index){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    findSubset(nums,output,ans,index+1);
    output.push_back(nums[index]);
    
    findSubset(nums,output,ans,index+1);
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int> > ans;
    vector<int> output;
    int index = 0;
    findSubset(nums,output,ans,index);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}