#include <iostream>
using namespace std;
int main(){
            int size;
            cout<<"Enter the size\n";
            cin>>size;
            int a[size];
			cout<<"Enter the elements of array\n";
			for(int i=0;i<size;i++){
				cin>>a[i];
			}
			cout<<"Enter the key you want to search\n";
			int key;
			cin>>key;

	   	    int low=0,high=size;
	   	    while(low<=high){
	   		int mid=low+(high-low)/2;
	   		if(a[mid]==key){
	   			cout<<"ELement present";
			}
			else if(a[mid]>key){
	   			low=mid+1;
			}	   	
	   		else if(a[mid]<key){
	   			high=mid-1;
	   		}
	   	   }

return 0;	
}
