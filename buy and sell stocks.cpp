#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxpro=0;
    int minprice=INT_MAX;
    for(int i=0;i<prices.size();i++){
        minprice=min(prices[i],minprice);
        maxpro=max(prices[i]-minprice,maxpro);
    }
    return maxpro;
}
