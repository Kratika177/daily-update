class Solution {
    public String reverseWords(String s) {
        String a[]=s.split(" +");
        String st=a[a.length-1];
        for(int i=a.length-2;i>=0;i--){
            st=st+" "+a[i];
        }
        
        return st.trim();
    }
}
