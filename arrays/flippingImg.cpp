#include<iostream>
using namespace std;
int main(){
    vector<vector<int> > nums; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<n; j++){
            int element;
            cout<<"element:";
            cin>>element;
            row.push_back(element);
        }
        nums.push_back(row);
    }

    vector<vector<int> > ans;
    for(int i=0; i<n; i++){
        vector<int> flippedRow;
        for(int j=0; j<n; j++){
            if(nums[i][n-j-1]==0){
                flippedRow.push_back(1);
            }
            else{
                flippedRow.push_back(0);
            }
        }
        ans.push_back(flippedRow);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}