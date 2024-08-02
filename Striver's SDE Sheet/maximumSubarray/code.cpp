#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>&nums){
    int maxi=INT_MIN;
    int sum=0;

    for(int num:nums){
        sum+=num;
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maxSubArray(nums);
    cout<<ans<<endl;
}