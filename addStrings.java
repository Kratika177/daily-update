class Solution {
    public String addStrings(String num1, String num2) {
        String res="";
        int carry=0;
        int i=num1.length()-1,j=num2.length()-1;
        while(i>=0 || j>=0 || carry>0){
            int sum=0;
            if(i>=0){
                sum+=num1.charAt(i)-'0';
                i--;
            }
            if(j>=0){
                sum+=num2.charAt(j)-'0';
                j--;
            }
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            res=Integer.toString(sum)+res;
        }
        return res;
    }
}
