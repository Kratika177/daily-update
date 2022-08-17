#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
void display(struct Node *head){
	struct Node *temp=head;
	while(temp->next!=head){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *second=(struct Node *)malloc(sizeof(struct Node));
	struct Node *third=(struct Node *)malloc(sizeof(struct Node));
	//linking nodes
	head->next=second;
	second->next=third;
	third->next=head;
	//giving values to nodes
	head->data=2;
	second->data=3;
	third ->data=4;
	
	display(head);
return 0;	
}
