class Solution {
    public String reverseWords(String s) {
        String[] s1=s.split(" ");
        String r="";
        for(int i=0;i<s1.length;i++){
            String rev=reverse(s1[i]);
            r=r+rev+" ";
        }
        r=r.substring(0,r.length()-1);
        return r;
    }
    public String reverse(String s){
       List<Character> l=new ArrayList<>();
       for(int i=s.length()-1;i>=0;i--)
       {
           l.add(s.charAt(i));
       }
        String result="";
       for(int i=0;i<l.size();i++)
       {
           result=result+l.get(i);
       }
        return result;
    }
}
