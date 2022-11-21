class Solution {
    public String toLowerCase(String s) {
        String s1="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>97)
            {
                s1+=s.charAt(i);
            }
            else{
                s1+=(char)(s.charAt(i)+32);
            }
                
        }
        
        return s1;
    }
}
