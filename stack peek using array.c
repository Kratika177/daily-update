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
void push(struct stack *s,int data){
	if(isfull(s)){
		printf("Stack overflow\n");
	}
	else{
	    s->top++;
	    s->arr[s->top]=data;		
	}

}
int peek(struct stack *s,int i){
	return s->arr[s->top-i+1];
}
int pop(struct stack *s){
	if(isempty(s)){
		printf("stack underflow\n");
	}
	else{
	    int x=s->arr[s->top];
	    s->top--;
	    return x;		
	}

}
int isfull(struct stack *s){
	if(s->top==s->size-1){
	    return 1;	
	}
	return 0;
}
void display(struct stack *s){
	int i=1;
	while(i<=s->top+1){
		printf("%d\n",peek(s,i));
		i++;
	}
}
int main(){
	struct stack s;
	s.size=5;
	s.top=-1;
	s.arr = (int *)malloc(s.size * sizeof(int));
	push(&s,1);
	push(&s,2);
	push(&s,3);
	int x=peek(&s,2);
	printf("Element at 2 is %d\n",x);
	printf("Elements of stack- \n");
	display(&s);
	printf("Element deleted- %d",pop(&s));


return 0;	
}
