#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of element:";
    cin>>n;
    vector<int> ans;
    for(int i= -n/2; i<=n/2; i++){
        if(n%2==0 && i==0){
            continue;
        }
        ans.push_back(i);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}