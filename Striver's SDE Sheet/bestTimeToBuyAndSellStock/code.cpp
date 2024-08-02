#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&prices){
    int maxi=0;
    int mini=INT_MAX;

    for(int price:prices){
        mini=min(mini,price);
        maxi=max(maxi,price-mini);
    }

    return maxi;
}

int main(){
    vector<int>prices={7,1,5,3,6,4};
    int ans=maxProfit(prices);
    cout<<ans<<endl;
}