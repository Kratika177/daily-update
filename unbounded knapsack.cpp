#include <iostream>
using namespace std;
int knapsack(int wei[],int val[],int capacity,int size){
	if(size==0||capacity==0){
		return 0;
	}
	if(wei[size-1]<=capacity){
		return max(val[size-1]+knapsack(wei,val,capacity-wei[size-1],size),knapsack(wei,val,capacity,size-1));
	}	
}
int main(){
    int wei[5]={5,10,6,4,2};
    int val[5]={1,2,3,4,5};
    int size=5;
    int capacity=20;
    int result=knapsack(wei,val,capacity,size);
    cout<<"The result is "<<result;	
return 0;	
}
