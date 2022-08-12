class Solution {
    public int[] runningSum(int[] nums) {
     int n=nums.length;
     int[] ans=new int[n];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<i+1;j++)
         {
             ans[i]=ans[i]+nums[j];
         }    
         
     }
        return ans;
    }
}
