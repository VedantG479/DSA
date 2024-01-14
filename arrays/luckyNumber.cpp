#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    vector<vector<int> > matrix(m,vector<int> (n));
    vector<int> ans;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Element:";
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<m; i++){
        int min = INT_MAX;
        int minCol = -1;
        for(int j=0; j<n; j++){
            if(matrix[i][j]<min){
                min = matrix[i][j];
                minCol = j;
            }
        }
        
        int max = INT_MIN;
        int maxRow = -1;
        for(int j=0; j<m; j++){
            if(matrix[j][minCol]>=max){
                max = matrix[j][minCol];
                maxRow = j;
            }
        }

        if(maxRow == i){
            ans.push_back(min);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}