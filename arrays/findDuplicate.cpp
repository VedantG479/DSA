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

    int duplicate = 0;
    for(int i=0; i<n; i++){
        duplicate ^= nums[i];
        duplicate ^= i;
    }
    
    cout<<duplicate;
    return 0;
}