/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
     ListNode temp=head;
     ListNode cur=head;
     while(temp!=null && temp.next!=null){
         while(cur!=null && cur.next!=null && cur.val==cur.next.val){                 
             temp.next=temp.next.next;
         }
         cur=cur.next;
         temp=temp.next;
     }
        return head;
    }
}
