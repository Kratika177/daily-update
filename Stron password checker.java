class Solution {
    public int specialSymbol(String password){
        int s=0;
        for(int i=0;i<password.length();i++){
        if(password.charAt(i)=='!' || password.charAt(i)=='@' || password.charAt(i)=='#' || password.charAt(i)=='$' || password.charAt(i)=='%' ||password.charAt(i)=='^' || password.charAt(i)=='&' ||  password.charAt(i)=='*' ||password.charAt(i)=='(' ||password.charAt(i)==')' ||password.charAt(i)=='-' ||password.charAt(i)=='+'){
            s++;
        }}
        return s;
    }
    public boolean strongPasswordCheckerII(String password) {
        int lc=0,uc=0,d=0,s=0;
        if(password.length()<8){
            return false;
        }
         for(int i=0;i<password.length()-1;i++){
             if(Character.isLowerCase(password.charAt(i))){
                 lc++;
             }
             if(Character.isUpperCase(password.charAt(i))){
                 uc++;
             }
             if(Character.isDigit(password.charAt(i))){
                 d++;
             }
             s=specialSymbol(password);
             if(password.charAt(i)==(password.charAt(i+1))){
                 return false;
             }

         }
         if(Character.isLowerCase(password.charAt(password.length()-1))){
                 lc++;
             }
             if(Character.isUpperCase(password.charAt(password.length()-1))){
                 uc++;
             }
             if(Character.isDigit(password.charAt(password.length()-1))){
                 d++;
             }
         if(lc<1 || uc<1 || d<1 ||s<1){
             return false;
         }
        return true;
    }
}
