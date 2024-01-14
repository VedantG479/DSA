#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"Enter target value:";
    cin>>target;
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>nums[i];
    }

    vector<int> ans(2);
    for(int i=0; i<n-1; i++){
        int targetNew = target - nums[i];
        for(int j=i+1; j<n; j++){
            if(nums[j]==targetNew){
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }

    cout<<ans[0]<<" "<<ans[1];
    return 0;
}