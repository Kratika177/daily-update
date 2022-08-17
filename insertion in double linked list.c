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
struct Node * add_to_front(struct Node *head,int d){
	struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
	new_node->data=d;
	new_node->next=head;
	head->prev=new_node;
	new_node->prev=NULL;
	head=new_node;
	
	return head;
}
struct Node * add_to_end(struct Node *head,int d){
	struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
	new_node->data=d;
	new_node->next=NULL;
	
	struct Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->prev=temp;
	return head;
}
struct Node * add_in_between(struct Node *head,int d,int ind){
	int count=0;
	struct Node *temp=head;
	while(count<ind-1){
		temp=temp->next;
		count++;
	}
	struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
	new_node->data=d;
	new_node->next=temp->next;
	temp->next=new_node;
	return head;
}
struct Node * add_after_a_node(struct Node *node,struct Node *head,int d){
	struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
	new_node->data=d;
	new_node->next=node->next;
	node->next=new_node;
	return head;
}
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *second=(struct Node *)malloc(sizeof(struct Node));
	struct Node *third=(struct Node *)malloc(sizeof(struct Node));
	//linking nodes
	head->next=second;
	second->next=third;
	third->next=NULL;
	//giving values to nodes
	head->data=2;
	second->data=3;
	third ->data=4;
	printf("Insertion option\n1- at front\n2- at end\n3- in middle\n4- after a node\nchoose the index of type of insertion\n");
	int choice;
	scanf("%d",&choice);
	printf("Enter the data of node\n");
	int d;
	scanf("%d",&d);
	
	if(choice==1){		
		head=add_to_front(head,d);
	}
	else if(choice==2){
		head=add_to_end(head,d);
	}
	else if(choice==3){
		printf("Enter the index\n");
	    int ind;
	    scanf("%d",&ind);
		head=add_in_between(head,d,ind);
	}
	else if(choice==4){
		head=add_after_a_node(second,head,d);
	}
	else{
		printf("Wrong input\n");
	}
	display(head);
return 0;	
}
