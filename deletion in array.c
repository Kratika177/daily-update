#include <stdio.h>
#include <stdlib.h>
void display(int arr[],int size ){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
void deletion(int arr[], int index,int size){
	int i;
	for(i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}
}
int main (){
    int arr[100]={2,3,4,5,6};
    int size=5;
    deletion(arr,3,size);
    size=size-1;
    display(arr,size);
return 0;	
}
