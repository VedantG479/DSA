#include<iostream>
#include<string>
using namespace std;
/*int main(){
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}*/
int main(){
    vector<char> str;
    int size;
    cout<<"enter size:";
    cin>>size;
    cout<<"enter string:";
    for(int i=0; i<size; i++){
        char s;
        cin>>s;
        str.push_back(s);
    }

    int start = 0, end = size - 1;
    while(start<end){
        str[start++] = str[end--];
    }

    for(int i=0; i<size; i++){
        cout<<str[i];
    }

    return 0;
}