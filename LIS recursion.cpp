#include <iostream>
using namespace std;
int LIS(int s1[],int n){
    if(n==0){
    	return 0;
	}
	if(s1[n-1]>s1[n-2]){
		return 1+LIS(s1,n-1);
	}
	else{
		return LIS(s1,n-1);
	}
}
int main(){
	int n=10;
	int s1[]={10,22,9,33,21,50,41,60,80,1};
	int result=LIS(s1,n);
	cout<<"result is "<<result;
return 0;  
}
