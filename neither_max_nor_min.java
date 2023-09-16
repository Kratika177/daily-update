class Solution {
    public int findNonMinOrMax(int[] nums) {
        
        int ma=nums[0];
        int mi=nums[0];
        if(nums.length==2){
            return -1;
        }
        else{
            for(int i=0;i<nums.length;i++){
                if(nums[i]<mi){
                    mi=nums[i];
                }
            }
            for(int i=0;i<nums.length;i++){
                if(nums[i]>ma){
                    ma=nums[i];
                }
            }
            for(int i=0;i<nums.length;i++){
                if(nums[i]!=mi && nums[i]!=ma){
                    return nums[i];
                }
            }
        }
        return -1;
        
    }
}
