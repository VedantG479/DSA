#include<iostream>
using namespace std;
void skip(string p, string s, int index){
    if(index>=s.size()){
        cout<<p;
        return;
    }

    if(s[index]=='a'){
        skip(p,s,index+1);
    }
    else{
        skip(p+s[index],s,index+1);
    }
}
int main(){
    skip("","sfawihasaawabfsnakd",0);
    return 0;
}