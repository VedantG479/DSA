#include<iostream>
using namespace std;
int findNum(int startR, int startC, int endR, int endC){
    if(startR == endR || startC == endC){
        return 1;
    }

    return findNum(startR + 1, startC, endR, endC) + findNum(startR, startC + 1, endR, endC);
}
int main(){
    int startRow = 0, startCol = 0;
    int targetRow = 2, targetCol = 2;

    cout<<findNum(startRow, startCol, targetRow, targetCol);
    return 0;
}