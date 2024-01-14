#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element";
        cin>>nums[i];
    }

    vector<int> leftProduct(n,1);
    vector<int> rightProduct(n,1);
    for(int i=1; i<n; i++){
        leftProduct[i] = (leftProduct[i-1]*nums[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        rightProduct[i] = (rightProduct[i+1]*nums[i+1]);
    }

    vector<int> answer(n);
    for(int i=0; i<n; i++){
        answer[i] = leftProduct[i] * rightProduct[i];
    }

    for(int i=0; i<n; i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}