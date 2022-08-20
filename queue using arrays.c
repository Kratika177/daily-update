#include <stdio.h>
#include <stdlib.h>
struct queue{
	int size;
	int front;
	int back;
	int *arr;
};
int isempty(struct queue *s){
	if(s->front==s->back){
	    return 1;	
	}
	return 0;
}
int isfull(struct queue *s){
	if(s->back==s->size-1){
	    return 1;	
	}
	return 0;
}
int main(){
	struct queue s;
	s.size=5;
	s.back=-1;
	s.front=-1;
	s.arr = (int *)malloc(s.size * sizeof(int));
	int a=isempty(&s);
	printf("%d ",a);
	int b=isfull(&s);
	printf("%d ",b);
return 0;	
}
