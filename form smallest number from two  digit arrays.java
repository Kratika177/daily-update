class Solution {
    public int minNumber(int[] nums1, int[] nums2) {
        List<Integer> common=new ArrayList<>();
        boolean temp=false;
        for(int i=0;i<nums1.length;i++){
            for(int j=0;j<nums2.length;j++){
                if(nums1[i]==nums2[j]){
                    common.add(nums1[i]);
                    temp=true;
                }
            }
        }
        int min=0;
        
        int min1=nums1[0],min2=nums2[0];
        if(temp==true){
             min=common.get(0);
            for(int i=0;i<common.size();i++){
                if(min>common.get(i)){
                    min=common.get(i);
                }
            }
            
            return min;
        }
        else{
            for(int i=0;i<nums1.length;i++){
                min1=Math.min(nums1[i],min1);
            }
            for(int i=0;i<nums2.length;i++){
                min2=Math.min(nums2[i],min2);
            }
            return Math.min(min1,min2)*10+Math.max(min1,min2);    
        }
        
        
    }
}
