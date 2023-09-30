class Solution {
    public int[] searchRange(int[] nums, int target) {
        int flag=0;
        int[] a=new int[2];
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                a[0]=i;
                 flag=1;
                break;
               
            }
        }
        for(int i=nums.length-1;i>=0;i--){
            if(nums[i]==target){
                a[1]=i;
                break;
            }
        }
        if(flag==1){
            return a;
        }
        else{
            a[0]=-1;
            a[1]=-1;
        }
        return a;
        
    }
}
