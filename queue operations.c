#include <stdio.h>
#include <stdlib.h>
struct queue{
	int size;
	int back;
	int front;
	int *arr;
};
int isempty(struct queue *s){
	if(s->front==s->back){
	    return 1;	
	}
	return 0;
}
void enqueue(struct queue *s,int data){
	if(isfull(s)){
		printf("queue overflow\n");
	}
	else{
	    s->back++;
	    s->arr[s->back]=data;		
	}

}
int peek(struct queue *s,int i){
	return s->arr[s->back-i+1];
}
int dequeue(struct queue *s){
	int x=-1;
	if(isempty(s)){
		printf("queue underflow\n");
		return -1;
	}
	else{	    
	    s->front++;
	    int x=s->arr[s->front];	    
	    		
	}
	return x;

}
int isfull(struct queue *s){
	if(s->back==s->size-1){
	    return 1;	
	}
	return 0;
}
void display(struct queue *s){
	int i=s->front+2;
	while(i<=s->back+1){
		printf("%d\n",peek(s,i));
		i++;
	}
}
int main(){
	struct queue s;
	s.size=5;
	s.back=-1;
	s.front=-1;
	s.arr = (int *)malloc(s.size * sizeof(int));
	enqueue(&s,1);
	enqueue(&s,2);
	enqueue(&s,3);
	int x=peek(&s,3);
	printf("Element at 3 is %d\n",x);
	printf("Elements of queue- \n");
	display(&s);
	printf("Element deleted- %d",dequeue(&s));


return 0;	
}
