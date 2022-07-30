#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int x,y;
	priority_queue<int> pq;
	priority_queue<int> pq2;	
	int a[]={5,6,7,8,9,4}; //k=3 and k=5
	for(int p=0;p<5;p++){
    	pq.push(a[p]);

	   if(pq.size()==3){
		x=pq.top();	
	  }	
	   if(pq.size()==5){
	   	y=pq.top();
	   }
	}
   cout<<"sum of 3rd and 5th smallest number is "<<x+y;
return 0;	
}
