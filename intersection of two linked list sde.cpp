#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
int length(Node *head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int findIntersection(Node *firstHead, Node *secondHead)
{
    int lenA=length(firstHead);
    int lenB=length(secondHead);
    while(lenA!=lenB){
        
        if(lenA<lenB){
            secondHead=secondHead->next;
            lenB--;
        }
        else{
            firstHead=firstHead->next;
            lenA--;
        }
    }
    //Write your code here
    Node *temp1=firstHead;
    Node *temp2=secondHead;
    
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1==NULL)
        return -1;
    return temp1->data;
}
