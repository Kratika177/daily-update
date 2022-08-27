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

bool detectCycle(Node *head)
{
    if(head==NULL){
        return false;
    }
    Node *temp=head;
    Node *temp1=head;
    while(temp1!=NULL && temp1->next!=NULL ){
        temp1=temp1->next->next;
        temp=temp->next;
        if(temp==temp1){
            return true;
        }
        
    }
    return false;
	//	Write your code here
}
