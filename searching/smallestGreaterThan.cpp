#include<iostream>
using namespace std;
int main(){
    vector<char> arr;
    arr.push_back('c');
    arr.push_back('f');
    arr.push_back('j');

    char target = 'a';
    int start = 0, end = arr.size()-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            if(mid+1<=arr.size()-1){
                cout<<arr[mid];
                return 0;
            }
        }
        else if(arr[mid]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout<<arr[start];
    return 0;
}