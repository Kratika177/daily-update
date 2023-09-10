public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        String s=Integer.toBinaryString(n);
        System.out.println(s);
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1'){
                count++;
            }
        }
        return count;
    }
}
