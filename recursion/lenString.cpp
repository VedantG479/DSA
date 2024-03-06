#include<iostream>
using namespace std;
int findLen(string s, int index, int count){
    if(index==s.size()) return count;

    return findLen(s,index+1, count+1);
}
int main(){
    string s = "geeksforgeeks";
    cout<<findLen(s,0,0);
    return 0;
}