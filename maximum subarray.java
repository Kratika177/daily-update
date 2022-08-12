class Solution {
    public int maxSubArray(int[] nums) {
        int[] subarraysum=new int[100];
        int sum=0;
        for(int i=0;i<nums.length;i++)
        {
                 sum+=nums[i];
        }
        if(nums.length>1)
        {
            for(int i=0;i<nums.length;i++)
        {
            
            subarraysum[i]=sum-nums[i];
        }
        }
        else
            subarraysum[0]=nums[0];
        
        int max=0;
        max=subarraysum[0];
        for(int i=0;i<subarraysum.length;i++)
        {
            if(max<subarraysum[i])
            {
                max=subarraysum[i];
            }
        }
        return max;
    }
}
