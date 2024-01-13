#include<iostream>
using namespace std;
vector<int> runningSum(vector<int>& nums){
    vector<int> ans;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        ans.push_back(sum);
    }
    return ans;
}
int main(){
    vector<int> question;
    int size;
    cout<<"Enter size:";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element";
        cin>>element;
        question.push_back(element);
    }
    vector<int> ans = runningSum(question);
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}