class Solution {
    public int searchInsert(int[] a, int target) {
        int low=0;
        int mid;
        int high=a.length-1;
        int pos=0;
        while(low<=high){
            mid=(low+high)/2;
            if(a[mid]==target){
                return mid;
            }
            else if(a[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
        
    }
}
