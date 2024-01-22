#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int spaces = 0, initialLength = s.length();
    for(int i=0; i<initialLength; i++){
        if(s[i]==' '){
            spaces++;
        }
    }

    int index = initialLength + 2*spaces - 1;
    s.resize(initialLength+2*spaces);

    for(int i=initialLength-1; i>=0; i--){
        if(s[i]==' '){
            s[index] = '0';
            s[index-1] = '4';
            s[index-2] = '@';
            index -= 3;
        }
        else{
            s[index--] = s[i];
        }
    }

    cout<<s;
    return 0;
}