class Solution {
    public int singleNumber(int[] nums) {
        int c=nums[0];
        int ans = 0;
        for(int i=0; i<nums.length; i++){
            ans^=nums[i];
        }
        return ans;
        
    }
}
