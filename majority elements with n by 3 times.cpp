#include <bits/stdc++.h> 
#include <map>
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    vector<int> ans;
    // Write your code here.
    map<int,int> mp;
    int valid_occ=n/3;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=1;
        else
            mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second>valid_occ){
            ans.push_back(i.first);
        }
    }
    return ans;

}
