#include <bits/stdc++.h> 
#include <unordered_map>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> ans;
    unordered_map<int,bool> mp;
    for(auto i:arr){
        if(mp.find(i)==mp.end()){
            mp[i]=true;
        }
        else{
            ans.second=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(mp.find(i)==mp.end()){
            ans.first=i;
        }
    }
    return ans;
	// Write your code here 
	
}
