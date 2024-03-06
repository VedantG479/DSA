#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(10);
    arr.push_back(11);
    arr.push_back(12);
    //arr.push_back(15);
    //arr.push_back(20);
    //arr.push_back(23);
    //arr.push_back(30);

    int target = 15;
    int size = 2;
    int start = 0, end = start + size - 1;
    while(target > arr[end]){
        if(end == arr.size()-1) break;
        start = end + 1;
        size *= 2;
        end += size;
        if(end > arr.size()-1)  end = arr.size()-1;
    }

    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            cout<<"found at :"<<mid;
            return 0;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<"not found";
    return 0;
}