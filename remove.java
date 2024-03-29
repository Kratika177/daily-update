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
    public ListNode removeElements(ListNode head, int val) {
        ListNode temp=new ListNode(0);
        temp.next=head;
        ListNode res=temp;
        
        while(res.next!=null){
            if(res.next.val==val){
                res.next=res.next.next;
            }
            else{
            res=res.next;}
        }
        return temp.next;
    }
}
