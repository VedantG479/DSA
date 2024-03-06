#include<iostream>
using namespace std;
void subs(string s, string output, vector<string>& ans, int index){
    if(index>=s.size()){
        if(output.size()!=0){
            ans.push_back(output);
        }
        return;
    }

    subs(s,output,ans,index+1);
    output.push_back(s[index]);
    subs(s,output,ans,index+1);
}
int main(){
    string s = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;
    subs(s,output,ans,index);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" "; 
    }
    return 0;
}