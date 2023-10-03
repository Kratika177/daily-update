class Solution {
    public int[] findmax(int[] height){
         int [] max=new int[2];
         int maxp=height[0];
         for(int i=0;i<height.length;i++){
            maxp=Math.max(maxp,height[i]);
            max[0]=maxp;
            max[1]=i;
        }
        return max;
    }
    public int maxArea(int[] height) {
       int i=0;
       int j=height.length-1;
       int maxArea=0;
       while(i<j){
           int cur=Math.min(height[i],height[j])*(j-i);
           maxArea=Math.max(maxArea,cur);
           if(height[i]<height[j]){
               i++;
           }
           else{
               j--;
           }
       }
    return maxArea;
        
    }
}
