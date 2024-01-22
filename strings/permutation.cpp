#include<iostream>
using namespace std;
/*int main(){
    string main;
    cout<<"Enter main string:";
    getline(cin,main);
    string sub;
    cout<<"Enter sub string:";
    getline(cin,sub);

    int windowLength = sub.length();
    sort(sub.begin(),sub.end());
    string toCompare;
    for(int i=0; i<=main.length()-windowLength; i++){
        for(int j=i; j<windowLength+i; j++)
            toCompare.push_back(main[j]);
        sort(toCompare.begin(),toCompare.end());
        if(toCompare==sub){
            cout<<"True";
            return 0;
        }  
        for(int j=0; j<windowLength; j++)
            toCompare.pop_back();  
    }
    cout<<"False";
    return 0;
}*/
bool compare(vector<int>& count1, vector<int>& count2){
    for(int i=0; i<count1.size(); i++){
        if(count1[i]!=count2[i])
            return false;
    }
    return true;
}
int main(){
    string main, sub;
    cout<<"Enter main string:";
    cin>>main;

    cout<<"Enter sub string:";
    cin>>sub;

    vector<int> countCheck(26,0);
    for(int i=0; i<sub.length(); i++){
        countCheck[sub[i]-'a']++;
    }

    vector<int> countMain(26,0);
    int i=0; 
    while(i<main.length() && i<sub.length()){
        countMain[main[i]-'a']++;
        i++;
    }

    if(compare(countCheck,countMain)){
        cout<<"True";
        return 0;
    }

    while(i<main.length()){
        countMain[main[i-sub.length()]-'a']--;
        countMain[main[i]-'a']++;
        i++;
        if(compare(countCheck,countMain)){
            cout<<"True";
            return 0;
        }
    }

    cout<<"False";
    return 0;
}