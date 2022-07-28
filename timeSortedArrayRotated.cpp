#include <iostream>
using namespace std;
int main(){
	//number of time a sorted array rotated
	cout<<"Enter the size of array\n";
	int size;
	cin>>size;
	int a[size];
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
		cout<<endl;
	}
	int key=a[0];
	for(int i=0;i<size;i++){
		if(a[i]<key){
			key=a[i];
		}
	}
	int low=0,high=size;
	while(low<=high){
		int mid=(high+low)/2;
		if(a[mid]==key){
			cout<<"Array rotated "<<mid<<" times";
			break;
		}
	    else if(a[mid]>key){
	   		high=mid-1;
		}	   	
	   	else if(a[mid]<key){
	   		low=mid+1;
	   	}
	}
return 0;	
}

