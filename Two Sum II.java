class Solution {
    public void moveZeroes(int[] nums) {
       int zeros=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                zeros++;
            }
        }
        List<Integer> ans =new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                ans.add(nums[i]);
            }
        }
        while(zeros!=-1){
            ans.add(0);
            zeros--;
        }
        for(int i=0;i<nums.length;i++){
            nums[i]=ans.get(i);
        }
    }
}
