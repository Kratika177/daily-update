class Solution {
    public int numberOfBeautifulIntegers(int low, int high, int k) {
        int c=0;
        for(int i=low;i<=high;i++){
            int odd=0;
            int even=0;
            String it=Integer.toString(i);
            for(int j=0;j<it.length();j++){
                if(Character.getNumericValue(it.charAt(j))%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            if(even==odd){
                if(i%k==0){
                    c++;
                }
            }
        }
        return c;
        
    }
}
