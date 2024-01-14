#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"enter elements:";
        cin>>nums[i];
    }

    int temp0 = 0, temp1 = 0, temp2 = n-1;
    while(temp1<=temp2){
        if(nums[temp1]==0){
            swap(nums[temp1],nums[temp0]);
            temp0++;
            temp1++;
        }
        else if(nums[temp1]==2){
            swap(nums[temp1],nums[temp2]);
            temp2--;
        }
        else{
            temp1++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
