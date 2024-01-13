#include<iostream>
using namespace std;
int main(){
    vector<int> gain;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int element;
        cout<<"Enter element: ";
        cin>>element;
        gain.push_back(element);
    }
    vector<int> ans(n+1);
    ans[0] = 0;
    for(int i=0; i<n; i++){
        ans[i+1] = gain[i]+ans[i];
    }
    int maxAlt = INT_MIN;
    for(int i=0; i<=n; i++){
        if(ans[i]>maxAlt){
            maxAlt = ans[i];
        }
    }
    cout<<maxAlt;
    return 0;
}