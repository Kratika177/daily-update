/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* node=head;
        ListNode* temp2=nullptr;
        int len=0;
        if(head->next==nullptr){
            return nullptr;
        }
        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }
        int position=len-n;
        int i=0;
        if(position==0){
            return head->next;
        }
        while(i!=position){
            temp2=node;
            node=node->next;
            i++;
        }
        temp2->next=node->next;
        delete node;
        return head;
    }
};
