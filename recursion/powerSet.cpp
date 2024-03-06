#include<iostream>
using namespace std;
void sets(vector<string> &ans, string output, string s, int index){
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }

    sets(ans,output,s,index+1);
    output.push_back(s[index]);
    sets(ans,output,s,index+1);
}
int main(){
    string s = "abc";
    vector<string> ans;
    string output = "";
    sets(ans,output,s,0);

    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}