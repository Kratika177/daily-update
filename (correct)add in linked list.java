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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode l3=null;
        int ans=0;
        while(l1!=null && l2!=null){
            ans=0;
            ListNode temp=new ListNode();
            ans=l1.val+l2.val+carry;
            if(ans>9){
                carry=ans/10;
                ans=ans%10;
            }
            else{
                carry=0;

            }
            temp.val=ans;
            ListNode temp2=l3;
            if(l3==null){
                l3=temp;
            }
            else{
                while(temp2.next!=null){
                    temp2=temp2.next;
                }
                temp2.next=temp;
            }
            l1=l1.next;
            l2=l2.next;
        }
        while(l1!=null){
            ans=0;
            ListNode temp=new ListNode();
            ans=l1.val+carry;
            if(ans>9){
                carry=ans/10;
                ans=ans%10;

            }
            else{
                carry=0;
            }
            temp.val=ans;

            ListNode temp2=l3;
            if(l3==null){
                l3=temp;
            }
            else{
                while(temp2.next!=null){
                    temp2=temp2.next;
                }
                temp2.next=temp;
            }
            l1=l1.next;
        }
        while(l2!=null){
            ans=0;
            ListNode temp=new ListNode();
            ans=l2.val+carry;
            if(ans>9){
                carry=ans/10;
                ans=ans%10;
            }
            else{
                carry=0;
            }
            temp.val=ans;
            ListNode temp2=l3;
            if(l3==null){
                l3=temp;
            }
            else{
                while(temp2.next!=null){
                    temp2=temp2.next;
                }
                temp2.next=temp;
            }
            l2=l2.next;
        }
        if(carry!=0){
            ListNode temp=new ListNode();
            temp.val=carry;
            ListNode temp2=l3;
            if(l3==null){
                l3=temp;
            }
            else{
                while(temp2.next!=null){
                    temp2=temp2.next;
                }
                temp2.next=temp;
            }
        }
        return l3;
    }
}
