class Solution {
    public String toLowerCase(String s) {
        String s1="";
        
        for(int i=0;i<s.length();i++)
        {
          
           if(s.charAt(i)>= 'A' &&s.charAt(i)<='Z'){
               s1+=(char)((int)s.charAt(i)+32);
            }
            else
                 s1+=s.charAt(i);
                
        }
        
        return s1;
    }
}
