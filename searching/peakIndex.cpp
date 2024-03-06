#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(2);

    int start = 0, end = arr.size() - 1;
    while(start<end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    cout<<"peak element:"<<arr[start];
    return 0;
}