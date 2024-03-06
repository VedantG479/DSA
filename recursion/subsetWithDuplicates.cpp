#include<iostream>
using namespace std;
void findSubset(vector<int>&nums, vector<int>output, vector<vector<int> >&ans, int index){
    ans.push_back(output);
    for (int i = index; i < nums.size(); ++i) {
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }

        output.push_back(nums[i]);
        findSubset(nums, output, ans, i + 1);
        output.pop_back();
    }
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    sort(nums.begin(),nums.end());
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