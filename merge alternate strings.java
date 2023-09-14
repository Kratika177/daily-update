class Solution {
    public String mergeAlternately(String word1, String word2) {
        String ans="";
        String answer="";
        if(word1.length()==word2.length()){
         for(int i=0;i<word1.length();i++){
               
                 ans=(word1.charAt(i)+""+word2.charAt(i));
                 answer+=ans;

         }  }
         else if(word1.length()<word2.length()){
             int i;
             for(i=0;i<word1.length();i++){
               
                 ans=(word1.charAt(i)+""+word2.charAt(i));
                 answer+=ans;

         }
         answer+=word2.substring(i);
         }
         else if(word1.length()>word2.length()){
             int i;
             for(i=0;i<word2.length();i++){
               
                 ans=(word1.charAt(i)+""+word2.charAt(i));
                 answer+=ans;

         }
         answer+=word1.substring(i);
         }
         return answer; 
    }
}
