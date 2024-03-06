#include<iostream>
using namespace std;
void trim(string s, string output, int index = 1){
    char toCompare = s[index - 1];
    if(index>=s.size()){
        output.push_back(toCompare);
        cout<<output;
        return;
    }
    if(s[index]==toCompare){
        return trim(s,output,index+1);
    }
    else{
        output.push_back(toCompare);
        return trim(s,output,index+1);
    }
}
int main(){
    string s = "geeksforgeeks";
    string output = "";
    trim(s,output);

    return 0;
}