#include<iostream>
using namespace std;
int calculateTotal(int target){
    if(target<0)    return 0;
    if(target==0)   return 1;
    return calculateTotal(target-1) + calculateTotal(target-2);
}
int main(){
    int target = 5;
    cout<<calculateTotal(target);
    return 0;
}