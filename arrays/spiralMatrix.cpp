#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int> > matrix(row,vector<int> (col));
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element:";
            cin>>matrix[i][j];
        }
    }

    int minRow = 0, maxRow = row-1;
    int minCol = 0, maxCol = col-1;
    int countElement = 0, totalElement = row*col;

    while(countElement<totalElement){
        for(int i=minCol; i<=maxCol && countElement<totalElement; i++){
            cout<<matrix[minRow][i]<<" ";
            countElement++;
        }
        minRow++;

        for(int i=minRow; i<=maxRow && countElement<totalElement; i++){
            cout<<matrix[i][maxCol]<<" ";
            countElement++;
        }
        maxCol--;

        for(int i=maxCol; i>=minCol && countElement<totalElement; i--){
            cout<<matrix[maxRow][i]<<" ";
            countElement++;
        }
        maxRow--;

        for(int i=maxRow; i>=minRow && countElement<totalElement; i--){
            cout<<matrix[i][minCol]<<" ";
            countElement++;
        }
        minCol++;
    }
    return 0;
}
