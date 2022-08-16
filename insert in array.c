#include <stdio.h>
#include <stdlib.h>
void display(int arr[],int size ){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
int insertion(int arr[], int data, int index,int size,int capacity){
	if(index>capacity)
	    return -1;
	int i;
	for(i=size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=data;
	return 1;
}
int main (){
    int arr[100]={2,3,4,5,6};
    int size=5;
    insertion(arr,14,3,size,100);
    size=size+1;
    display(arr,size);
return 0;	
}
