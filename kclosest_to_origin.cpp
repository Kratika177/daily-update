#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	
	priority_queue<pair<int,pair<int,int> > > pq;
	int a[4][2]={{1,3},{-2,2},{5,8},{0,1}}; //k=2 
	for(int i=0;i<4;i++){
    	pq.push(make_pair( ( (a[i][0]*a[i][0]) + (a[i][1]*a[i][1]) ),make_pair(a[i][0],a[i][1]) ));

	  if(pq.size()>2){
		pq.pop();
	
	  }	
	}
    while(pq.size()!=0)
	{
		pair< int,pair<int,int> > t=pq.top();
		cout<<t.second.first<<" "<<t.second.second<<endl;
		pq.pop();
	}	
return 0;	
}
