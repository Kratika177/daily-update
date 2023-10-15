class Solution{
    static String removeChars(String string1, String string2){
        // code here
        String s="";
        int flag=0;
        for(int i=0;i<string1.length();i++){
            flag=0;
            for(int j=0;j<string2.length();j++){
                if(string1.charAt(i)==string2.charAt(j)){
                    flag=1;
                }
                
            }
            if(flag==0){
                    s+=string1.charAt(i);
            }
        }
        return s;
    }
}
