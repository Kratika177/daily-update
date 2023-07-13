class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
       Set<Integer> s1=new HashSet<>();
       for(int i:nums1){
           s1.add(i);
       }
       Set<Integer> s2=new HashSet<>();
       for(int i:nums2){
           s2.add(i);
       }
       Set<Integer> s=new HashSet<>();
       for(Integer i:s1){
           if(s2.contains(i)){
               s.add(i);
           }
       }
       int[] a=new int[s.size()];
       int j=0;
       for(Integer v:s){
           a[j++]=v.intValue();
       }
       return a;
    }
}
