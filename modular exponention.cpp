#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
     if(n==0){
        return 1;
    }
    long haf=modularExponentiation(x,n/2,m);
    if(n%2==0){
        return (int)((haf*haf)%m);
    }else{
        return (int)(((haf*haf)%m)*x%m)%m;
    }
}
