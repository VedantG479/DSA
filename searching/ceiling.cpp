#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(14);
    arr.push_back(16);
    arr.push_back(18);

    int target;
    cout<<"enter target";
    cin>>target;

    int start = 0, end = arr.size()-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            cout<<"ceiling :"<<arr[mid];
            return 0;
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<"ceiling:"<<arr[start];
    return 0;
}