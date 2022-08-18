#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int k=0;
    int x=m*n;
    vector<int> arr;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            arr.push_back(mat[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
