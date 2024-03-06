#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int minPrice=INT_MAX;
    int maxProfit=0;

    int n=prices.size();

    for(int i=0;i<n;i++){
        if(minPrice>prices[i]){
            minPrice=prices[i];
        }
        else if(prices[i]-minPrice>maxProfit){
            maxProfit=prices[i]-minPrice;
        }
    }
    return maxProfit;
}

int main(){
    vector<int> prices={7, 1, 5, 3, 6, 4};
    cout<<maxProfit(prices)<<endl;
}