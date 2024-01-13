#include<iostream>
using namespace std;
int diagnol(vector<vector<int> > matrix, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += matrix[i][i];
        sum += matrix[i][size-i-1];
    }
    if(size%2!=0){
        return sum - matrix[size/2][size/2];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int> > matrix;
    for(int j=0; j<n; j++){
        vector<int> row;
        for(int i=0; i<n; i++){
            int element;
            cout<<"Enter element";
            cin>>element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }

    cout<<diagnol(matrix,n);
    return 0;
}