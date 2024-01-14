#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>nums[i];
    }

    int temp1 = 0, temp2 = n-1;
    while(temp1<temp2){
        if(nums[temp1]==0){
            temp1++;
        }
        else if(nums[temp2]==1){
            temp2--;
        }
        else{
            swap(nums[temp1],nums[temp2]);
            temp1++;
            temp2--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}