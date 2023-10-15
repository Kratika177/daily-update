class Solution {
    public String defangIPaddr(String s) {
        String ans="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='.'){
               ans=s.replace(s.charAt(i)+"","[.]");
            }
        }
        return ans;
    }
}
