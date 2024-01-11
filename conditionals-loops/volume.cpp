#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<4*M_PI*pow(radius,3)/3;
    return 0;
}