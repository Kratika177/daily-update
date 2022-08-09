#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int static t[6][21]={-1};  
int knapsack(int wei[],int val[],int capacity,int size){
	if(size==0||capacity==0){
		return 0;
	}
	if(t[size][capacity]!=-1){
		return t[size][capacity];
	}
	if(wei[size-1]<=capacity){
		t[size][capacity]= max(val[size-1]+knapsack(wei,val,capacity-wei[size-1],size-1),knapsack(wei,val,capacity,size-1));
		return t[size][capacity];
	}
	else if(wei[size-1]>capacity){
		knapsack(wei,val,capacity,size-1);
		return t[size][capacity];
	}	
}
int main(){
    int size=5;
    int capacity=20;
    int wei[5]={5,10,6,4,2};
    int val[5]={1,2,3,4,5};
    int result=knapsack(wei,val,capacity,size);
    cout<<"The result is "<<result;	
return 0;	
}
