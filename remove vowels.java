class Solution {
    boolean isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U'){
            return true;
        }
        return false;
    }
    String removeVowels(String s) {
        // code here
        String st="";
        for(int i=0;i<s.length();i++){
            if(!isVowel(s.charAt(i))){
                st+=s.charAt(i);
            }
        }
        return st;
    }
}
