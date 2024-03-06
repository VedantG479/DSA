#include<iostream>
using namespace std;
int main(){
    vector<int> arr; 
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(17);
    arr.push_back(10);
    arr.push_back(121);

    int target;
    cout<<"enter target:";
    cin>>target;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==target){
            cout<<i;
            return 0;
        }
    }

    cout<<"not found";
    return 0;
}