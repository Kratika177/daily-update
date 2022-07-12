class Solution {
    public String defangIPaddr(String address) {
        String defanged="";
        for(int i=0;i<address.length();i++)
        {
           char c= address.charAt(i);
            if(c=='.')
                defanged += "[.]";
            else
                defanged += c;
                
        }
       return defanged; 
    }
}
