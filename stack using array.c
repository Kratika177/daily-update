#include <stdio.h>
#include <stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
int isempty(struct stack *s){
	if(s->top==-1){
	    return 1;	
	}
	return 0;
}
int isfull(struct stack *s){
	if(s->top==s->size-1){
	    return 1;	
	}
	return 0;
}
int main(){
	struct stack *s;
	s->size=5;
	s->top=-1;
	s->arr = (int *)malloc(s->size * sizeof(int));
	int a=isempty(s);
	printf("%d ",a);
	int b=isfull(s);
	printf("%d ",b);
return 0;	
}
