#include<iostream>
using namespace std;
void reverseOf(int num, int &revNum){
    if(num==0)  return;
    revNum *= 10;
    revNum += num%10; 
    reverseOf(num/10,revNum);
}
int main(){
    int n = 1824;
    int reverseNum = 0;
    reverseOf(n,reverseNum);
    cout<<reverseNum;
    return 0;
}