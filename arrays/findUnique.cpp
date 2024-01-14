#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> nums(2*n + 1);
    for(int i=0; i<2*n + 1; i++){
        cout<<"Enter element:";
        cin>>nums[i];
    }

    int unique = 0;
    for(int i=0; i<nums.size(); i++){
        unique ^= nums[i];
    }
    cout<<unique;
    return 0;
}