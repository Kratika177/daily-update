#include <stdio.h>
#include <stdlib.h>
struct stack{
	int size;
	int top;
	char *arr;
};
int isempty(struct stack *s){
	if(s->top==-1){
	    return 1;	
	}
	return 0;
}
void push(struct stack *s,char data){
	if(isfull(s)){
		printf("Stack overflow\n");
	}
	else{
	    s->top++;
	    s->arr[s->top]=data;		
	}

}
int peek(struct stack *s,char i){
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
int check_parenthesis(char *exp){
	struct stack s;
	s.size=15;
	s.top=-1;
	s.arr = (char *)malloc(s.size * sizeof(char));
	int i=0;
	for( i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(&s,'(');
		}
		else if(exp[i]==')'){
			if(!isempty(&s)){
				pop(&s);	
			}
			else{
				return 0;
			}
		}
	}
	if(!isempty(&s)){
		return 0;
	}
	else{
		return 1;
	}
} 
void display(struct stack *s){
	int i=1;
	while(i<=s->top+1){
		printf("%d\n",peek(s,i));
		i++;
	}
}
int main(){
	char *exp="(8*6)+(9)";
    if(check_parenthesis(exp)){
    	printf("Balanced\n");
	}
	else{
		printf("Unbalanced\n");
	}
    


return 0;	
}
