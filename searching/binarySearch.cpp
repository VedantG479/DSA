#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(10);
    arr.push_back(13);
    arr.push_back(17);
    arr.push_back(25);
    arr.push_back(69);
    arr.push_back(100);

    int target;
    cout<<"enter target to found:";
    cin>>target;

    int start = 0, end = arr.size()-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            cout<<"found at "<<mid;
            return 0;
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<"not found";
    return 0;
}
