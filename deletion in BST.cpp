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
struct node* inorderPredecessor(struct node* root){
	root=root->left;
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}
struct node* deleteNode(struct node* root,int key){
	struct node* ipre; 
	if(root==NULL){
		return NULL;
	}
	if(root->left==NULL &&root->right==NULL){
		free(root);
		return NULL;
	}
	if(root->data>key){
		root->left=deleteNode(root->left,key);
	}
	else if(root->data<key){
		root->right=deleteNode(root->right,key);
	}
	else{
		ipre=inorderPredecessor(root);
		root->data=ipre->data;
		root->left=deleteNode(root->left,ipre->data);
	}
	return root;
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
	int key=4;
	printf("Before deletion\n");
	Inorder(n1);
	struct node* ans=deleteNode(n1,key);
	printf("\nAfter deletion\n");
    Inorder(n1);
	
return 0;	
}
