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
	n->left=NULL;
	n->right=NULL;
}
int main(){
	struct node* root=createNode(2);
	struct node* l=createNode(1);
	struct node* r=createNode(4);
	//linking root node to its children
	root->left=l;
	root->right=r;
}
