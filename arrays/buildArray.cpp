#include<iostream>
using namespace std;
int main(){
    vector<int> question; 
    int size;
    cout<<"Enter size of array";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter element";
        cin>>element;
        question.push_back(element);
    }

    vector<int> ans;
    for(int i=0; i<size; i++){
        ans.push_back(question[question[i]]);
    }

    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}