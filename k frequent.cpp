#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;



int main(){
	
	priority_queue <pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
	int a[]={1,1,1,3,2,2,4}; //k=2
	map <int,int> mp;
	map<int,int>:: iterator i;
	for(int i=0;i<7;i++){
		mp[a[i]]++;
	}
	for(i=mp.begin();i!=mp.end();i++){
	  
    	pq.push(make_pair(i->second,i->first));	  
	    if(pq.size()>2){
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
