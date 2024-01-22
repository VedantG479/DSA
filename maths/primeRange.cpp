#include<iostream>
using namespace std;
int main(){
    int high;
    cout<<"Higher Range:";
    cin>>high;
    
    vector<int> nums;
    for(int i=1; i<=high; i++){
        nums.push_back(i);
    }

    vector<bool> isPrime(high,true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2; i<high; i++){
        if(isPrime[i]){
            for(int j=2*i; j<high; j=j+i){
                isPrime[j] = false;
            }
        }
    }
    
    for(int i=0; i<high; i++){
        cout<<nums[i]<<" "<<isPrime[i];
        cout<<endl;
    }

    return 0;
}