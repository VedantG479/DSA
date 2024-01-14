#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<vector<int> > matrix(n,vector<int> (n));

    int minRow = 0, maxRow = n-1;
    int minCol = 0, maxCol = n-1;
    int countElement = 0, totalElement = n*n;

    while(countElement<totalElement){
        for(int i=minCol; i<=maxCol && countElement<totalElement; i++){
            matrix[minRow][i]=(countElement+1);
            countElement++;
        }
        minRow++;

        for(int i=minRow; i<=maxRow && countElement<totalElement; i++){
            matrix[i][maxCol]=(countElement+1);
            countElement++;
        }
        maxCol--;

        for(int i=maxCol; i>=minCol && countElement<totalElement; i--){
            matrix[maxRow][i]=(countElement+1);
            countElement++;
        }
        maxRow--;

        for(int i=maxRow; i>=minRow && countElement<totalElement; i--){
            matrix[i][minCol]=(countElement+1);
            countElement++;
        }
        minCol++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}