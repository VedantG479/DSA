#include<iostream>
using namespace std;
void checkTriplet(int num1, int num2, int num3){
    if(pow(num1,2)+pow(num2,2)==pow(num3,2))
        cout<<"Triplet";
    else if(pow(num2,2)+pow(num3,2)==pow(num1,2))
        cout<<"Triplet";
    else if(pow(num3,2)+pow(num1,2)==pow(num2,2))
        cout<<"Triplet";
    else    
        cout<<"Not Triplet";
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    checkTriplet(a,b,c);
    return 0;
}