#include<iostream>
using namespace std;
void findPaths(int startR, int startC, int endR, int endC, string output){
    if(startR == endR && startC == endC){
        cout<<output<<" ";
        return;
    }
    if(startR < endR){
        findPaths(startR+1,startC, endR, endC, output + 'D');
    }
    if(startC < endC){
        findPaths(startR,startC+1, endR, endC, output + 'R');
    }
}
int main(){
    findPaths(0,0,2,2,"");
    return 0;
}