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
struct node* search(struct node* root,int key){
	while(root!=NULL){
		if(root->data==key){
			return root;
		}
		else if(root->data>key){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	return NULL;
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
	int key=7;
	struct node* res=search(n1,key);
	if(res!=NULL)
	    printf("%d is present",key);
	else
	    printf("%d is not present",key);    
	
return 0;	
}
