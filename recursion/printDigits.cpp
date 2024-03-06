#include<iostream>
using namespace std;
void say(string digits[10], int num){
    if(num==0)  return;

    int digit = num%10;
    say(digits,num/10);
    cout<<digits[digit]<<" ";
}
int main(){
    int num = 416;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    say(arr,num);
    return 0;
}