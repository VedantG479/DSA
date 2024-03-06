#include<iostream>
using namespace std;
void skip(string p, string s, int index){
    if(index >= s.size()){
        cout<<p;
        return;
    }

    if(s[index]=='a'){
        string toCompare = "apple";
        int i = 0,indexToCompare = index;
        string toAdd = "";
        while(i<5 && toCompare[i]==s[indexToCompare]){
            toAdd.push_back(toCompare[i]);
            i++;
            indexToCompare++;
        }
        if(i==5){
            skip(p,s,index+5);
        }
        else{
            skip(p+toAdd,s,index+i);
        }
    }
    else{
        skip(p+s[index],s,index+1);
    }
}
int main(){
    skip("","sfbaibasasa",0);
    return 0;
}