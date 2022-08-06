#include <iostream>
using namespace std;
int LCS(string s1,string s2,int n,int m){
	int c=0;
	for(int i=0;i<s1.size();i++){
		for(int j=i;j<s2.size();j++){
			if(s1[i]==s2[j]){
			    c++;	
			}
		}
	}
	return c;
}
int main(){
	int n=5;
	int m=4;
	string s1="abcdeg";
	string s2="abhcij";
	int result=LCS(s1,s2,n,m);
	cout<<"result is "<<result;
}
