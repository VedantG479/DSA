#include<iostream>
using namespace std;
int main(){
    vector<int> question;
    int size; 
    cout<<"Enter size:";
    cin>>size;
    for(int i=0; i<size; i++){
        int element;
        cout<<"Enter a element";
        cin>>element;
        question.push_back(element);
    }

    vector<int> ans(2*size);
    for(int i=0; i<size; i++){
        ans[i] = question[i];
        ans[i+size] = question[i];
    }

    for(int i=0; i<2*size; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}