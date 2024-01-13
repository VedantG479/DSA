#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > matrix{
        {1 ,2 ,3 },
        {4 ,5 ,6 },
        {7 ,8 ,9 }
    };
    for(int i=1; i<matrix.size(); i++){
        swap(matrix[0][i],matrix[i][0]);
    }
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}