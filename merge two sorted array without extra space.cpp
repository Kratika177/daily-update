#include <bits/stdc++.h> 
#include <iterator>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int k=0;
    for(int i=m;i<m+n;i++){
        arr1[i]=arr2[k++];
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
    }
