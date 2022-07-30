#include <bits/stdc++.h>
#include <vector>


using namespace std;

int main(){
	
	priority_queue <int,vector<int>,greater<int> > pq;
	int a[]={6,5,3,2,8,10,9}; //k=3

	for(int p=0;p<7;p++){
	  if(pq.size()<4){
    	pq.push(a[p]);
    	
	  }
	  else{
	  	pq.push(a[p]);
		cout<<(pq.top())<<" ";
		pq.pop();	     	
	  }

	}
	while(!pq.empty()){
		cout<<(pq.top())<<" ";
		pq.pop();
	}
}
