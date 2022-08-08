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
void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}
int main(){
	struct node* n1=createNode(4);
	struct node* n2=createNode(1);
	struct node* n3=createNode(6);
	struct node* n4=createNode(5);
	struct node* n5=createNode(2);
	//linking root node to its children
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	printf("Postorder= ");
	postorder(n1);
return 0;	
}
