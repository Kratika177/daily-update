#include<iostream>
#include<list>
using namespace std;
int main(){
	long N;
	
    cout<<"Enter N"<<endl;
    cin>>N;
	for(long i=1;i<=N;i++){
		for(long j=1;j<=N;j++){
			for(long k=1;k<=N;k++){
				if((i<=j&& j<=k) && (k*k==i*i+j*j) && (k=i*i-j)){
			      if(i<=N&&j<=N&&k<=N)		
				    cout<<i<<" "<<j<<" "<<k<<endl;
				  break;	
				}
			}
		}
	}
return 0;	
}
