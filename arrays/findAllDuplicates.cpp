#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    vector<int> nums(n);
    vector<int> count(n,0);
    for(int i=0; i<n; i++){
        cout<<"Enter element";
        cin>>nums[i];
    }
    for(int i=0; i<n; i++){
        count[nums[i]]++;
    }

    vector<int> duplicates;
    for(int i=0; i<n; i++){
        if(count[i]>1){
            duplicates.push_back(i);
        }
    }

    for(int i=0; i<duplicates.size(); i++){
        cout<<duplicates[i]<<" ";
    }

    return 0;
}