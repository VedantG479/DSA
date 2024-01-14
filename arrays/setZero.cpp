#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int> > matrix(row, vector<int> (col));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element:";
            cin>>matrix[i][j];
        }
    }

    vector<int> zeroRows;
    vector<int> zeroColumns;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==0){
                zeroRows.push_back(i);
                zeroColumns.push_back(j);
            }
        }
    }
    for(auto x: zeroRows){
        for(int i=0; i<col; i++){
            matrix[x][i]=0;
        }
    }
    for(auto x: zeroColumns){
        for(int i=0; i<row; i++){
            matrix[i][x]=0;
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j];
        }
    }
}