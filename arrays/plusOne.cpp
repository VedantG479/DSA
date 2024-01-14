#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> digits(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>digits[i];
    }
    for(int i=n-1; i>=0; i++){
        if(digits[i]!=9){
            digits[i]++;
            break;
        }
        else{
            digits[i]=0;
            if(i==0){
                digits.insert(digits.begin(),1);
                break;
            }
        }
    }
    for(int x: digits){
        cout<<x<<" ";
    }
    return 0;
}