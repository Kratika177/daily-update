class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        
        int max=arr[0];
        for(int i:arr){
           max=Math.max(max,i);
        }        
        int key=max;
        int ans=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==max){
                ans=i;
            }
        }
        return ans;
    }
}
