#include <bits/stdc++.h>
using namespace std;

vector<int>generateRows(int row){
    vector<int> ans;
    int res=1;
    ans.push_back(res);

    for(int i=1;i<row;i++){
        res=res*(row-i)/i;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> generate(int numRows){
    vector<vector<int>> ans;

    for(int i=1;i<=numRows;i++){
        ans.push_back(generateRows(i));
    }
    return ans;
}

int main(){
    int numRows=5;
    vector<vector<int>>ans=generate(numRows);

    for(auto ele:ans){
        for(int num:ele){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}