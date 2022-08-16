#include <stdio.h>
#include <stdlib.h>
struct array {
	int total_size;
	int used_size;
	int* ptr;
};

void create_array(struct array * items,int tsize,int usize){
	items->total_size=tsize;
	items->used_size=usize;
	items->ptr=(int*)malloc(tsize*sizeof(int));
}

void show(struct array * items){
	int i;
	for(i=0;i<items->used_size;i++){
		printf("%d",items->ptr[i]);
	}
} 

void set_values(struct array * items){
	int n;
	int i;
	for(i=0;i<items->used_size;i++){
		printf("Enter element %d\n",i);
		scanf("%d ",&n);
		items->ptr[i]=n;
	}
}
int get(struct array * items, int index){
	
	return items->ptr[index];
}

void set(struct array * items, int index,int data){
	
	items->ptr[index]=data;
}


int main(){
	struct array  items;
	create_array(&items,10,4);
	printf("\nSetting the values of array\n");
	set_values(&items);
	printf("\nPrinting the array\n");
	show(&items);
	printf("\nGet the value at particular index\n");
	int result=get(&items,2);
	printf("\nThe element at index 2 is %d\n",result);
	printf("Set the value at particular index\n");
	set(&items,2,7);
	printf("\nPrint again after setting the new value\n");
	show(&items);
return 0;	
}
