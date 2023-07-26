class Solution {
    public int majorityElement(int[] nums) {
        int c=0;
        int key,value;
        Map<Integer,Integer> mp=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            key=nums[i];
            if(mp.containsKey(key)){
                value=mp.get(key);
                mp.put(key,value+1);
            }
            else{
                mp.put(key,1);
            }

        }
        for (Map.Entry<Integer,Integer> entry : mp.entrySet()) {
            if(entry.getValue()>((nums.length)/2)){
                return entry.getKey();
            }
        }
        return -1;
    }
}
