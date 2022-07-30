#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	
	priority_queue <int,vector<int>,greater<int> > pq;
	int a[]={7,10,4,3,20,15};
	for(int p=0;p<6;p++){
	  if(pq.size()<3){
    	pq.push(a[p]);
	  }
	  else if(pq.size()>=3){
		pq.pop();
		pq.push(a[p]);
	  }	
	}
    while(pq.size()!=0)
	{
		cout<<pq.top()<<" ";
		pq.pop();

	}
	
	
return 0;	
}
