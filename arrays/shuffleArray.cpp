#include<iostream>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n){
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter size";
    cin>>size;
    vector<int> question;
    for(int i=0; i<2*size; i++){
        int element;
        cout<<"Enter a element";
        cin>>element;
        question.push_back(element);
    }
    vector<int> ans = shuffle(question,size);
    for(int i=0; i<2*size; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}