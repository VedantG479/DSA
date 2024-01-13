#include<iostream>
using namespace std; 
int maxWealth(vector<vector<int> >& money){
    int max = 0;
    for(int i=0; i<money.size(); i++){
        int person = 0;
        for(int j=0; j<money[0].size(); j++){
            person += money[i][j];
        } 
        if(person>max){
            max = person;
        }
    }
    return max;
}
int main(){
    vector<vector<int> > question;
    int noRow, noCol;
    cout<<"Enter number of customers";
    cin>>noRow;
    cout<<"Enter number of banks";
    cin>>noCol;
    for(int i=0; i<noRow; i++){
        vector<int> bank;
        for(int j=0; j<noCol; j++){
            int element;
            cout<<"Enter amount";
            cin>>element;
            bank.push_back(element);
        }
        question.push_back(bank);
    }

    cout<<maxWealth(question);
    return 0;
}