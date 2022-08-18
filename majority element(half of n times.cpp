#include <bits/stdc++.h> 
#include <map>
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map<int,int> mp;
    int valid_occ=n/2;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end())
            mp[arr[i]]=1;
        else
            mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second>valid_occ){
            return i.first;
        }
    }
    return -1;
}
