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
    ListNode newlk;
    void insertAtBegin(int item){
        ListNode nodenew=new ListNode();
        nodenew.val=item;
        nodenew.next=newlk;
        newlk=nodenew;
    }
    public ListNode doubleIt(ListNode head) {
        String s="";
        while(head!=null){
            Integer a=(head.val);
            s+=a.toString(head.val);
            head=head.next;
        }
        int val=Integer.parseInt(s);
        int doub=val*2;
        Integer b=(doub);
        String s1=b.toString(doub);
        
        for(int i=s1.length()-1;i>=0;i--){
            insertAtBegin(Integer.parseInt(""+s1.charAt(i)));
        }

				
        return newlk;
    }
}
