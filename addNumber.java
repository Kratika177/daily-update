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
        ListNode l3=null;
        String s="";
        StringBuilder snew=new StringBuilder();
        
        String s2="";
        StringBuilder s2new=new StringBuilder();
        ListNode temp1=l1;
        ListNode temp2=l2;
        while(temp1!=null){
            s+=String.valueOf(temp1.val);
            temp1=temp1.next;
        }
        while(temp2!=null){
            s2+=String.valueOf(temp2.val);
            temp2=temp2.next;
        }
        snew.append(s);
        s2new.append(s2);
        int a=Integer.parseInt((snew.reverse()).toString())+Integer.parseInt((s2new.reverse()).toString());
        System.out.println(a);
        for(int i=(((String.valueOf(a)).length())-1);i>=0;i--){
            ListNode newn=new ListNode();
            newn.val=a%10;
            newn.next=null;
            if(l3==null){
                l3=newn;
            }
            else{
                ListNode t=l3;
                while(t.next!=null){
                    t=t.next;
                }
                t.next=newn;
            }
            a=a/10;
        }
        return l3;
    }
}
