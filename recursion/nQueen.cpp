#include<iostream>
using namespace std;
void display(vector<vector<int> > queenPlaced){
    for(int i=0; i<queenPlaced.size(); i++){
        for(int j=0; j<queenPlaced[i].size(); j++){
            cout<<queenPlaced[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool isSafe(vector<vector<int> > &queenPlaced, int n, int col, int row){
    int x =row, y = col;

    //check for same col - 
    while(x>=0){
        if(queenPlaced[x][y])   return false;
        x--;
    }

    x = row;
    y = col;
    //check for left diagnol - 
    while(x>=0 && y>=0){
        if(queenPlaced[x][y])   return false;
        x--;
        y--;
    }

    x = row;
    y = col;
    //check for right diagnol - 
    while(x>=0 && y<n){
        if(queenPlaced[x][y])   return false;
        x--;
        y++;
    }

    return true;
}
int findWays(vector<vector<int> > &queenPlaced, int n, int row){
    if(row==n){ 
        display(queenPlaced);
        return 1;
    }

    int ways = 0;

    for(int i=0; i<n; i++){
        if(isSafe(queenPlaced, n, i, row)){
            queenPlaced[row][i] = 1;
            ways += findWays(queenPlaced,n,row+1);
            queenPlaced[row][i] = 0;
        }
    }

    return ways;
}
int main(){
    int n = 4;
    vector<vector<int> > queenPlaced(n,vector<int>(n,0));
    cout<<findWays(queenPlaced,n,0);
    return 0;
}