class Solution {
    public List<Integer> intersection(int[][] nums) {
        List <Integer> l=new ArrayList<>();
        
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[j].length<=nums[i].length){
                for(int k=0;k<nums[j].length;k++){
                    if(nums[i][k]==nums[j][k]){
                        l.add(nums[i][k]);                
                    }
                }
                }
                else if(nums[j].length>nums[i].length){
                for(int k=0;k<nums[i].length;k++){
                    if(nums[i][k]==nums[j][k]){
                        l.add(nums[i][k]);                
                    }
                }
                }
            }
        }
        Collections.sort(l);
        return l;
        
    }
}
