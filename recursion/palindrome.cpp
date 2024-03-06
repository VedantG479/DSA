#include<iostream>
using namespace std;
bool isPalin(vector<int> &nums, int start, int end){
    if(start>=end)  return true;

    if(nums[start]!=nums[end])  return false;
    else    return isPalin(nums,start+1, end-1);
}
int main(){
    vector<int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(1);
    cout<<isPalin(n,0,n.size()-1);
    return 0;
}