class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
       
        List<Integer> intersection= new ArrayList<>();
       Arrays.sort(nums1);
       Arrays.sort(nums2); 
        int i=0,j=0;
       while (i < nums1.length && j < nums2.length) {
            if (nums1[i] == nums2[j]) {
                intersection.add(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]){
                i++;
            } else {
                j++;
            }
        }
        
         int[] x = new int[intersection.size()];
        for(int m=0;m<intersection.size();m++)
            x[m]=intersection.get(m);

        return x;    
        }
       
    
}
