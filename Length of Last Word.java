class Solution {
    public int lengthOfLastWord(String s) {
        String sp[]=s.split(" ");
        int i=sp.length-1;
        while(sp[i]==""){
            i--;
        }
        return sp[i].length();
    }
}
