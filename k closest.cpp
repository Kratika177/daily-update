#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	
	priority_queue<pair<int,int> > pq;
	int a[]={5,6,7,8,9}; //k=3 and x=7
	for(int p=0;p<5;p++){
	  if(pq.size()<=3){
    	pq.push(make_pair(abs(7-a[p]),a[p]));
	  }
	  else if(pq.size()==4){
		pq.pop();
	
	  }	
	}
    while(pq.size()!=0)
	{
		pair<int,int> t=pq.top();
		cout<<t.second<<" ";
		pq.pop();
	}	
return 0;	
}
