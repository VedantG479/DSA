#include<iostream>
using namespace std;
int main(){
    int n1; 
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0; i<n1; i++){
        cout<<"Enter element:";
        cin>>arr1[i];
    }

    int n2; 
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0; i<n2; i++){
        cout<<"Enter element:";
        cin>>arr2[i];
    }

    vector<int> duplicates;
    int temp1 = 0, temp2 = 0;
    while(temp1<n1 && temp2<n2){
        if(arr1[temp1]==arr2[temp2]){
            duplicates.push_back(arr1[temp1]);
            temp1++;
            temp2++;
        }
        else if(arr1[temp1]>arr2[temp2]){
            temp2++;
        }
        else{
            temp1++;
        }
    }

    for(int i=0; i<duplicates.size(); i++){
        cout<<duplicates[i]<<" ";
    }
    return 0;
}