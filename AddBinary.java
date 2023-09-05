//binary adder

class Solution {
    public String addBinary(String a, String b) {
        int len1=a.length();
        int len2=b.length();
        String s="";
        if(len1>len2){
            while(len2!=len1){
                b="0"+b;
                len2=b.length();
            }
        }
        if(len1<len2){
            while(len2!=len1){
                a="0"+a;
                len1=a.length();
            }
        }
        char c='0';
        for(int i=a.length()-1;i>=0;i--){
            if(( c=='0' && a.charAt(i)=='1' && b.charAt(i)=='1') || (c=='1' && (a.charAt(i)=='1' || b.charAt(i)=='1'))){
                if(c=='1' && a.charAt(i)=='1' && b.charAt(i)=='1'){
                    s='1'+s;
                    c='1';
                }
                else{
                s='0'+s;
                c='1';}
            }
            else if(c=='0' && (a.charAt(i)=='1' || b.charAt(i)=='1')){
                s='1'+s;
                c='0';
            }
            else if(c=='1' && a.charAt(i)=='1' && b.charAt(i)=='1'){
                s='1'+s;
                c='1';
            }
            else if(c=='1' && (a.charAt(i)=='0') && (b.charAt(i)=='0')){
                s='1'+s;
                c='0';
            }
            else if(c=='0' && a.charAt(i)=='0' && a.charAt(i)=='0'){
                s='0'+s;
                c='0';
            }

        }
        if(c=='1'){
            s=c+s;
        }
        if(s==""){
            s="0";
        }
        return s;
        
    }
}
