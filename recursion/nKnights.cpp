#include<iostream>
using namespace std;
bool isValid(int n, int row, int col){
    return row >= 0 && row < n && col >= 0 && col < n;
}
bool isSafe(vector<vector<int> > &knightsPlaced, int row, int col){
    int n = knightsPlaced.size();
    if(isValid(n, row - 2, col - 1)) {
        if (knightsPlaced[row - 2][col - 1]) {
            return false;
        }
    }
    if (isValid(n, row - 1, col - 2)) {
        if (knightsPlaced[row - 1][col - 2]) {
            return false;
        }
    }

    if (isValid(n, row - 2, col + 1)) {
        if (knightsPlaced[row - 2][col + 1]) {
            return false;
        }
    }

    if (isValid(n, row - 1, col + 2)) {
        if (knightsPlaced[row - 1][col + 2]) {
            return false;
        }
    }

    return true;
}
int findWays(vector<vector<int> > &knightsPlaced, int knights, int row, int col){
    if(knights==0){
        return 1;
    }

    if (row == knightsPlaced.size() - 1 && col == knightsPlaced.size()) return 0;

    if(col == knightsPlaced.size()) return findWays(knightsPlaced,knights,row+1,0);

    int ways = 0;

    if(isSafe(knightsPlaced,row,col)){
        knightsPlaced[row][col] = 1;
        ways += findWays(knightsPlaced,row,col+1,knights-1);
        knightsPlaced[row][col] = 0;
    }
    ways += findWays(knightsPlaced,knights,row,col+1);

    return ways;

}
int main(){
    int n = 4;
    vector<vector<int> > knightsPlaced(n, vector<int>(n,0));
    cout<<findWays(knightsPlaced,4,0,0);
    return 0;
}