#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int size; 
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element";
        cin>>element;
        nums.push_back(element);
    }
    vector<int> index;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element";
        cin>>element;
        index.push_back(element);
    }

    vector<int> target(size);
    for(int i=0; i<size; i++){
        target.insert(target.begin()+index[i],nums[i]);
    }

    for(int i=0; i<size; i++){
        cout<<target[i]<<" ";
    }
    
    return 0;
}