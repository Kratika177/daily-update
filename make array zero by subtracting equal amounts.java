class Solution {
    public int minimumOperations(int[] nums) {
       HashMap<Integer,Integer> mp=new HashMap<>();
        int count=0;
        for(int i :nums){
            if(i!=0 && !mp.containsKey(i)){
                mp.put(i,1);
                count++;
            }
        }
        return count;
    }
}
