class Solution {
    public int maximumNumberOfStringPairs(String[] words) {
        int c=0;
        for(int i=0;i<words.length;i++){
            StringBuffer b=new StringBuffer(words[i]);
            String temp=b.reverse().toString();
            for(int j=i+1;j<words.length;j++){
                if(temp.equals(words[j])){
                    c++;    
                }
            }
        }
        return c;
        
    }
}
