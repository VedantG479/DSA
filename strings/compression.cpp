#include<iostream>
using namespace std;
int main(){
    vector<char> arr;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        char element;
        cin>>element;
        arr.push_back(element);
    }

    int count = 1;
    char toCompare = arr[0];
    string ans;

    for(int i=1; i<size; i++){
        if(arr[i]==toCompare){
            count++;
        }
        else{
            ans.push_back(toCompare);
            if(count==1){
                toCompare = arr[i];
                count = 1;
                continue;
            }
            string strCount = to_string(count);
            for(int j=0; j<strCount.length(); j++){
                ans.push_back(strCount[j]);
            }
            toCompare = arr[i];
            count = 1;
        }
    }
    ans.push_back(toCompare);
    string strCount = to_string(count);
    for(int j=0; j<strCount.length(); j++){
        ans.push_back(strCount[j]);
    }

    cout<<ans;
    return 0;
}