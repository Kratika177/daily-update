class Solution {
    public int removeDuplicates(int[] nums) {
        int flag=0;
        int c=0;
        List<Integer> unique=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            flag=0;
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]==nums[j]){
                    flag=1;
                }
            }
            if(flag==0){
                unique.add(nums[i]);
                c++;
            }
        }
        int k=0;
        for(int i=0;i<unique.size();i++){
            nums[k++]=unique.get(i);
        }
        System.out.println(c);
        return c;
    }
}
