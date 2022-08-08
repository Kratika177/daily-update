#include <stdio.h>
#include <malloc.h>

struct node{ //Structure of a node
	int data; // data of the node
	struct node* left; //left child of a node
	struct node* right; // right child of a node
};
struct node* createNode(int data){ // function to create a new node
	struct node* n; 
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
}
int isBST(struct node* root){
	
	if(root!=NULL){
		struct node* temp=NULL;
		if(!(root->left)) return 1;		
		if(temp!=NULL && root->data <= temp->data) return 0;
		temp=root;
		return isBST(root->right);
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
    int ans=isBST(n1);
    if(ans==0) 
	    printf("It is not a BST\n");
	else{
		printf("It is a BST\n");
	}    
return 0;	
}
