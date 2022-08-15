#include <iostream>
using namespace std;

int main(){
	int matrix[][3]={{1,1,1},{1,0,1},{1,1,1}};
	int result[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]==0){			    				
				int k=i-1;
				while(k>=0){
				    if(matrix[k][j]!=0){
				    	matrix[k][j]=-1;
					}
					k--;	
				}
				k=i+1;
				while(k<=3){
					if(matrix[k][j]!=0){
						matrix[k][j]=-1;
					}
					k++;
				}
				 k=j-1;
				while(k>=0){
				    if(matrix[i][k]!=0){
				    	matrix[i][k]=-1;
					}
					k--;	
				}
				k=j+1;
				while(k<=3){
					if(matrix[i][k]!=0){
						matrix[i][k]=-1;
					}
					k++;
				}
							
			}
		
		}		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]<=0){
				matrix[i][j]=0;
			}			
		}
		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
return 0;	
}
