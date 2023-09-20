class Solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<(Integer.toBinaryString(i).length());j++){
                if(Integer.toBinaryString(i).charAt(j)=='1')
                    c++;
            }
            if(c==k){
                sum=sum+nums.get(i);
            }
        }
        return sum;
    }
}
