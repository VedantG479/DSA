#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pairSum;
    cout<<"Enter sum value:";
    cin>>pairSum;

    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>nums[i];
    }

    vector<vector<int> > ans;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j]==pairSum){
                vector<int> temp;
                temp.push_back(min(nums[i],nums[j]));
                temp.push_back(max(nums[i],nums[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}