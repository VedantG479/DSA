#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int sumLeft = 0, sumRight = 0;
    for(int i=0; i<n; i++){
        cout<<"Element:";
        cin>>nums[i];
        sumRight += nums[i];
    }
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<n; i++){
        currentSum += nums[i];
        if(currentSum>maxSum){
            maxSum = currentSum;
        }
        if(currentSum<0){
            currentSum = 0;
        }
    }
    cout<<maxSum;
    return 0;
}