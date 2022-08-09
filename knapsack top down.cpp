#include <iostream>
using namespace std;
int knapsack(int wei[],int val[],int capacity,int size, int t[][21]){
	for(int i=0;i<size+1;i++){
		for(int j=0;j<capacity+1;j++){
			if(i==0||j==0){
				t[i][j]=0;
			}			
		}
	}
	for(int i=1;i<size+1;i++){
		for(int j=1;j<capacity+1;j++){
			if(wei[i-1]<=j){
		        t[i][j]=max(val[i-1]+t[i-1][j-wei[i-1]],t[i-1][j]);
	        }
			else{
				t[i][j]=t[i-1][j];
			}				
		}
	}
	
	return t[size][capacity];	
	
}
int main(){
    int wei[5]={5,10,6,4,2};
    int t[6][21]={-1};
	int val[5]={1,2,3,4,5};
    int size=5;
    int capacity=20;
    int result=knapsack(wei,val,capacity,size,t);
    cout<<"The result is "<<result;	
return 0;	
}
