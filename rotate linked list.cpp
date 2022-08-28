#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    int c=0;
    Node *prev=NULL;
    Node *cur=head;
    if(head->next==NULL||head==NULL){
        return head;
    }
    while(c<k){
        while(cur->next!=NULL){
            prev=cur;
            cur=cur->next;
        }
        cur->next=head;
        head=cur;
        prev->next=NULL;
        c++;
    }
    return head;
        
}
