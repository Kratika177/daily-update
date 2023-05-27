/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int l1=0,l2=0;
        ListNode a=headA;
        ListNode b=headB;
        ListNode  temp1=headA;
        ListNode  temp2=headB;
        while(a!=null){

            l1++;
            a=a.next;
        }
        while(b!=null){
            l2++;
            b=b.next;
        }
        if((l1>l2)){
            while(l1!=l2){
                temp1=temp1.next;
                l1--;
            }

        }
        if((l1<l2)){
            while(l1!=l2){
                temp2=temp2.next;
                l2--;
            }

        }
        if(l1==l2){
            while(temp1!=temp2){
                temp1=temp1.next;
                temp2=temp2.next;
            }

        }
        return temp1;
    }
}
