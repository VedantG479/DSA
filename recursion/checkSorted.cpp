#include<iostream>
using namespace std;
bool check(vector<int> &arr, int index, int size){
    if(index == size - 1)   return true;
    
    if(arr[index] < arr[index + 1]){
        return check(arr,index+1,size);
    }
    else    return false;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(8);
    arr.push_back(9);
    arr.push_back(12);
    cout<<check(arr,0,arr.size());
    return 0;
}