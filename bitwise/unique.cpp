#include<iostream>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);

    int ans = 0;

    for(int j=0; j<32; j++){
        int noBits = 0;
        for(int i=0; i<arr.size(); i++){
            if((arr[i]&(1<<j))!=0){
                noBits++;
            }
        }
        if(noBits%3==1){
            ans |= (1 << j);;
        }
    }

    cout<<ans;
    return 0;
}