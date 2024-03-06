#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER:";
    cin>>n;

    int startSS = 0, endSS = n;
    while(startSS<endSS){
        int mid = startSS + (endSS - startSS)/2;
        if(mid*mid==n){
            cout<<"square root is:"<<mid;
            return 0;
        }
        else if(mid*mid<n){
            startSS = mid + 1;
        }
        else{
            endSS = mid - 1;
        }
    }

    cout<<"square root is:"<<startSS;
    return 0;
}