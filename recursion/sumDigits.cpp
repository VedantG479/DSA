#include<iostream>
using namespace std;
int sumD(int num){
    if(num<=0){
        return 0;
    }
    return (num%10) + sumD(num/10);
}
int main(){
    int n = 1342;
    cout<<sumD(n);
    return 0;
}