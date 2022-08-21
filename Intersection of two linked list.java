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
        //finding length of list A
        ListNode tempA=headA;
        int lenA=0;
        while(tempA!=null){
            lenA++;
            tempA=tempA.next;
        }
        //finding length of list B
        ListNode tempB=headB;
        int lenB=0;
        while(tempB!=null){
            lenB++;
            tempB=tempB.next;
        }
        //adjusting headA
        if(lenA>lenB){
            while(lenB!=lenA){
                headA=headA.next;
                lenA--;
            }
        }
        //adjusting headB
        if(lenA<lenB){
            while(lenB!=lenA){
                headB=headB.next;
                lenB--;
            }
        }
        while(headA!=headB){
            headA=headA.next;
            headB=headB.next;
        }
        return headA;
    }
}
