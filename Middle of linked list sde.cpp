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

Node *findMiddle(Node *head) {
    // Write your code here
    int len=0;
    Node *temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    int mid=(len/2)+1;
    int k=0;
    Node *temp2=head;
    while(k<mid-1){
        temp2=temp2->next;
        k++;
    }
    temp2->next=NULL;
    return temp2;
}
