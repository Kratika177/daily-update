#include <stdio.h>
#include <malloc.h>
struct node{
	int data;
	struct node* left;
	struct node* right; 
};
struct node* createNode(int data){
	struct node *p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->right=NULL;
	p->left=NULL;
}
void insert(struct node* root,int key){
	struct node* prev=NULL;
	struct node* newNode=createNode(key);
	while(root!=NULL){
		prev=root;
		if(root->data==key){
			printf("Duplicate value!!\n");
			return;
		}
		else if(root->data>key){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	if(prev->data>key){
	    prev->left=newNode;	
	}
	else{
		prev->right=newNode;
	}
}
void Inorder(struct node* root){
	if(root!=NULL){
		Inorder(root->left);		
		printf("%d ",root->data);
		Inorder(root->right);
	}
}
int main(){
	struct node* n1=createNode(5);
	struct node* n2=createNode(3);
	struct node* n3=createNode(6);
	struct node* n4=createNode(1);
	struct node* n5=createNode(4);
	//linking root node to its children
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	int key=8;
	insert(n1,key);
    Inorder(n1);
	
return 0;	
}
