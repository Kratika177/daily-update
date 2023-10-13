#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
void display(struct Node *ptr){
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
struct Node * delete_from_front(struct Node *head){
	struct Node *p=head; 
	head=head->next;
	head->prev=NULL;
	free(p);
	return head;
}
struct Node * delete_from_end(struct Node *head){
	struct Node *p=head;
	struct Node *q=head->next;  
	while(q->next!=NULL){
		q=q->next;
		p=p->next;
	}
	p->next=NULL;
	free(q);
	return head;
}
struct Node * delete_from_between(struct Node *head,int ind){
	int count=0;
	struct Node *p=head;
	struct Node *q=head->next;
	while(count<ind){
		count++;
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct Node * delete_node_with_value(struct Node *head,int d){
    struct Node *p=head;
	struct Node *q=head->next;
	while(q->data!=d && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==d){
		p->next=q->next;
	    free(q);	
	}
	return head;
}
int main(){
	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
	struct Node *second=(struct Node *)malloc(sizeof(struct Node));
	struct Node *third=(struct Node *)malloc(sizeof(struct Node));
	struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
	struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));
	struct Node *sixth=(struct Node *)malloc(sizeof(struct Node));
	//linking nodes
	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=sixth;
	sixth->next=NULL;
	//giving values to nodes
	head->data=2;
	second->data=3;
	third ->data=4;
	fourth->data=5;
	fifth->data=6;
	sixth->data=7;
	
	printf("Deletion option\n1- from front\n2- from end\n3- from middle\n4- delete node with given value\nchoose the index of type of deletion\n");
	int choice;
	scanf("%d",&choice);

	
	if(choice==1){		
		head=delete_from_front(head);
	}
	else if(choice==2){
		head=delete_from_end(head);
	}
	else if(choice==3){
		printf("Enter the index\n");
	    int ind;
	    scanf("%d",&ind);
		head=delete_from_between(head,ind);
	}
	else if(choice==4){
		printf("Enter the data of node\n");
	    int d;
	    scanf("%d",&d);
	    head=delete_node_with_value(head,d);
		
	}
	else{
		printf("Wrong input\n");
	}
	display(head);
return 0;	
}
