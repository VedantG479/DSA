#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter a number";
    cin>>n;

    double x = n;
    double root;
    while(true){
        root = (x + n/x)/2;
        if(abs(root - x)<0.00000005){
            break;
        }
        x = root;
    }
    cout<<root;
    return 0;
}