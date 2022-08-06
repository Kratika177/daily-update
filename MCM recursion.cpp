#include <iostream>
using namespace std;
int MCM(int arr[],int i,int j){
  //if only one element is present then we cannot multiply that so it is smallest invalid input(Base condition) 
	if(i>=j){
		return 0;
	}
	int min=INT_MAX;
  
  
  /* {40,20, 30, 10,30}
   *      i        j
   *      k. k+1......k
   * {i to k} {k+1 to j}
   * {40, 20} {30,10,30}   
   */
  
	for(int k=i;k<=j-1;k++){
	    int temp=MCM(arr,i,k)+MCM(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
		if(temp<min){
			min=temp;
		}	
	}
	return min;	
}
int main(){
  //             i         j
	int arr[5]={40,20,30,10,30};
	int i=1;
	int j=5;
	int result=MCM(arr,i,j-1); 
	cout<<"Result is "<<result;
}
