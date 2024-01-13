#include<iostream>
using namespace std;
int main(){
    vector<int> nums;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"enter:";
        cin>>element;
        nums.push_back(element);
    }

    int countEven = 0;
    for(int i=0; i<size; i++){
        int countDigit = 0;
        while(nums[i]>0){
            countDigit++;
            nums[i] /= 10;
        }
        if(countDigit%2==0){
            countEven++;
        }
    }
    cout<<countEven;
    return 0;
}