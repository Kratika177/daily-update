class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() == t.length()) {

      char[] c1 = s.toCharArray();
      char[] c2 = t.toCharArray();

      Arrays.sort(c1);
      Arrays.sort(c2);
   boolean b= Arrays.equals(c1,c2);
        return b;
        }
    else
        return false;
    }

}
