#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> colors(n);
    for(int i=0; i<n; i++){
        cout<<"Enter element:";
        cin>>colors[i];
    }

    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        if(colors[mid]=="red"){
            swap(colors[mid],colors[low]);
            mid++;
            low++;
        }
        else if(colors[mid]=="blue"){
            swap(colors[mid],colors[high]);
            high--;
        }
        else{
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<colors[i]<<" ";
    }
    return 0;
}