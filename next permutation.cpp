#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int ind1=0,ind2=0,i,j;    
    for(i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            break;
        }
    }
    if(i<0){
        reverse(permutation.begin(),permutation.end());
    }
    else{
        for(j=n-1;j>i;j--){
            if(permutation[j]>permutation[i]){
                break;
            }
        }
        swap(permutation[i],permutation[j]);
        reverse(permutation.begin()+i+1,permutation.end());
    }
    return permutation;
}
