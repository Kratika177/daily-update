#include <iostream>
using namespace std;
int LCS(string s1,string s2,int n,int m,int t[][7]){
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0||j==0){
				t[i][j]=0;
			}		
		}
	}
	for(int i=1;i<7;i++){
		for(int j=1;j<7;j++){
		    if(s1[i-1]==s2[j-1]){
		        t[i][j]= 1+t[i-1][j-1];
	        }
	        else{
		        t[i][j]=max(t[i][j-1],t[i-1][j]);
	        }			
		}
	}
	
	return t[n][m];
    
	
}
int main(){
	int t[7][7]={-1};
	int n=6;
	int m=6;
	string s1="abcdeg";
	string s2="abhcij";
	int result=LCS(s1,s2,n,m,t);
	cout<<"result is "<<result;
}
