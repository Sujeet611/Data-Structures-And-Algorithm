#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>rotate(vector<vector<int>>& matrix){
    int n=matrix.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    return matrix;
}

int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>ans=rotate(matrix);

    for(auto ele:ans){
        for(int num:ele){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}