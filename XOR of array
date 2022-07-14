class Solution {
    public int xorOperation(int n, int start) {
        
        int[] nums= new int[n];
        
        int x=start;
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
            
        }
        
        for(int i=0;i<n-1;i++)
        {
               x=x^nums[i+1];
            
        }
        return x;
    }
}
