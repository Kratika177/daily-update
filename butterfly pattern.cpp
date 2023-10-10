/*
  
*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *

*/


#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=8;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=2*8-2*i;k>=1;k--){
                cout<<" ";
            }
            for(int l=1;l<=i;l++){
                cout<<"*";
            }
            cout<<endl;
            
	    }
	    for(int i=7;i>=1;i--){
	        for(int j=1;j<=i;j++){
	            cout<<"*";
	        }
	        for(int k=2*8-2*i;k>=1;k--){
	            cout<<" ";
	        }
	        for(int l=1;l<=i;l++){
	            cout<<"*";
	        }
	        cout<<endl;
	    }
}
