#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
void display(struct Node *ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *second=(struct Node *)malloc(sizeof(struct Node));
	struct Node *third=(struct Node *)malloc(sizeof(struct Node));
	//linking nodes
	head->next=second;
	head->prev=NULL;
	second->next=third;
	second->prev=head;
	third->next=NULL;
	third->prev=second;
	//giving values to nodes
	head->data=2;
	second->data=3;
	third ->data=4;
	
	display(head);
return 0;	
}
