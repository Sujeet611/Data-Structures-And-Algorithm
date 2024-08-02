#include <bits/stdc++.h>
using namespace std;

vector<int>sortColors(vector<int>&nums){
    int n=nums.size();
    int i=0,j=0,k=n-1;

    while(j<=k){
        if(nums[j]==0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[j]==1){
            j++;
        }
        else{
            swap(nums[j],nums[k]);
            k--;
        }
    }
    return nums;
}

int main(){
    vector<int>nums={2,0,2,1,1,0};
    vector<int>ans=sortColors(nums);

    for(int num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
}