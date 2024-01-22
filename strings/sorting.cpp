#include<iostream>
using namespace std;
int main(){
    string shuffled;
    getline(cin,shuffled);

    vector<string> inOrder(9);
    string toPush;
    for(int i=0; i<shuffled.length(); i++){
        if(shuffled[i]>='0' && shuffled[i]<='9'){
            inOrder[shuffled[i]-'0'] = toPush+" ";
            toPush = "";
            i++;
        }
        else{
            toPush.push_back(shuffled[i]);
        }
    }

    string ans = "";
    for(int i=1; i<inOrder.size(); i++){
        ans += inOrder[i];
    }

    cout<<ans;
    return 0;
}