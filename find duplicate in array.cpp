#include <bits/stdc++.h> 
#include <unordered_map>
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int,bool> mp;
    for(auto i : arr){
        if(mp.find(i)==mp.end()){
            mp[i]=true;
        }
        else{
            return i;
        }
    }
}
