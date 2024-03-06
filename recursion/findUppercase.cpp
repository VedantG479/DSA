#include<iostream>
using namespace std;
void uppercases(string ch, string &output, int index){
    if(index==ch.size())    return;
    if(ch[index]>='A' && ch[index]<='Z'){
        output.push_back(ch[index]);
        uppercases(ch,output,index+1);
    }
    else{
        uppercases(ch,output,index+1);
    }
}
int main(){
    string ch = "geekSforGeeKS";
    string output = "";
    uppercases(ch, output, 0);
    cout<<output;
    return 0;
}