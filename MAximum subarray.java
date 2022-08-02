class Solution {
    public int maxProduct(int[] nums) {
     int curr_product = 1, res = Integer.MIN_VALUE;
       
       for (int i: nums) {
           curr_product =curr_product * i;
           res = Math.max(curr_product, res);
           if(curr_product == 0) {
               curr_product = 1;
           }
       }
         curr_product = 1;
        for (int i = nums.length-1; i>=0; i--) {
           curr_product = curr_product * nums[i];
           res = Math.max(curr_product, res);
           if(curr_product == 0) {
               curr_product = 1;
           }      
       }
             return res;
}
}
