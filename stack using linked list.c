#include <stdio.h>
#include <stdlib.h>

struct stack{
	int data;
	struct stack *next;
};


struct stack* push(struct stack *top,int data){
	struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
	ptr->data=data;
	ptr->next=NULL;
	if(isfull(top)){
		printf("Stack overflow\n");		
	}
	else{
	    ptr->next=top;
	    top=ptr;
		return top;		
	}

}
int isempty(struct stack *top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(struct stack *top){
	struct stack *p=(struct stack*)malloc(sizeof(struct stack));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
struct stack* pop(struct stack *top){
	struct stack *p=top;
	int x=top->data;
	top=top->next;
	free(p);
	return top;
	
}
int peek(struct stack *top){
	return top->data;
}
void display(struct stack *top){
	struct stack *p=top;
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main(){
    struct stack* s=NULL;
    s=push(s,1);
    s=push(s,2);
    s=push(s,3);
    s=push(s,4);
    s=push(s,5);
    display(s);
return 0;	
}
