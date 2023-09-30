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
        List<Long> num1=new ArrayList<>();
        List<Long> num2=new ArrayList<>();
        ListNode l3=null;
        while(l1!=null){
            num1.add((long)l1.val);
            l1=l1.next;
        }
        while(l2!=null){
            num2.add((long)l2.val);
            l2=l2.next;
        }

            long temp1=0;
            long temp2=0;
            for(int i=num1.size()-1;i>=0;i--){
                temp1=temp1*(long)10+num1.get(i);
            }
            for(int i=num2.size()-1;i>=0;i--){
                temp2=temp2*(long)10+num2.get(i); 
            }
            long temp3=temp1+temp2;
            
            System.out.println(temp1);
            
            ListNode head=null;
            String str=new StringBuilder(Long.toString(temp3)).reverse().toString();
            int len=str.length();
            int c=0;
            ListNode temp;

            for(int i=0;i<str.length();i++){
                //addToListNode(temp3%10);
                
                l3=new ListNode();
                l3.val=Integer.parseInt(Character.toString(str.charAt(i)));
                l3.next=null;
                temp=head;
                if(head==null){
                    
                    head=l3;
                }
                else{
                    while(temp.next!=null){
                        temp=temp.next;
                    }
                    temp.next=l3;
                }
                str=str.substring(0,str.length());
            }
            
    
    return head;
    }
}
