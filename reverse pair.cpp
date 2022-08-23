#include <bits/stdc++.h> 
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i<j && arr[i]>(2*arr[j])){
                count++;
            }
        }
    }
    return count;
}
