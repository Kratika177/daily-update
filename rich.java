class Solution {
    public int maximumWealth(int[][] accounts) {
        int wealth[]=new int[accounts.length];
        int sum=0;
        int k=0;
       for(int i=0;i<accounts.length;i++){
           sum=0;
           for(int j=0;j<accounts[0].length;j++){
               sum=sum+accounts[i][j];
           }
           wealth[k]=sum;
           k++;
       }
       int max=wealth[0];
       for(int i=0;i<wealth.length;i++){
           System.out.println(wealth[i]);
       }
       for(int i=0;i<wealth.length;i++){
           if(max<wealth[i]){
               max=wealth[i];
           }
       }
       return max; 
    }
}
