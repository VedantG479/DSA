#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1; j++){
            if(j==0 || j==2*(n-i)-2 || i==0)
                cout<<"*";
            else    
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}