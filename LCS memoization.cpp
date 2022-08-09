#include <iostream>
using namespace std;
int t[7][7]={-1};
int LCS(string s1,string s2,int n,int m){
	
    if(n==0||m==0){
    	return 0;
	}
	if(t[n][m]!=-1){
		return t[n][m];
	}
	if(s1[n-1]==s2[m-1]){
		return t[n][m]=1+LCS(s1,s2,n-1,m-1);
	}
	else{
		return t[n][m]=max(LCS(s1,s2,n,m-1),LCS(s1,s2,n-1,m));
	}
}
int main(){
	int n=6;
	int m=6;
	string s1="abcdeg";
	string s2="abhcij";
	int result=LCS(s1,s2,n,m);
	cout<<"result is "<<result;
}
