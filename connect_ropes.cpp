#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	
	priority_queue <int,vector<int>,greater<int> > pq;
	int a[]={1,2,3,4,5};
	for(int p=0;p<5;p++){
	   	pq.push(a[p]);
	   	
	}
	int sum=0;
    while(pq.size()!=1)
	{
		int x=pq.top();
		pq.pop();
		int y=pq.top();
		pq.pop();
		sum=sum+x+y;
		pq.push(x+y);
	}
	cout<<"Total cost= "<<sum;
	
	
return 0;	
}
