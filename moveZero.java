class Solution {
    public void moveZeroes(int[] nums) {
     int i=0;
     for(int x:nums){
         if(x!=0){
             nums[i]=x;
             i++;
         }
     }   
     while(i<nums.length){
         nums[i]=0;
         i++;
     }
    }
}
