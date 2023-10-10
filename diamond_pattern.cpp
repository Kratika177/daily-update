/*
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
 *************
  ***********
   *********
    *******
     *****
      ***
       *

*/
#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=8;i++){
            for(int j=1;j<=8-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
            
	}
	for(int i=7;i>=1;i--){
            for(int j=1;j<=8-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
            
	}
	
}
