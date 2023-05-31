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
    public int getDecimalValue(ListNode head) {
        ListNode temp=head;
        ListNode temp2=head;
        int ans=0;
        int l=0;
        while(temp!=null){
            l++;
            temp=temp.next;
        }
        while(temp2!=null){
            ans=ans+(temp2.val)*(int)Math.pow(2,(l-1));
            l--;
            temp2=temp2.next;
        }
        return ans;
    }
}
