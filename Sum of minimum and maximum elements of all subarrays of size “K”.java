import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {
    public static long sumOfMaxAndMin(ArrayList<Integer> nums, int n, int k) {
        // Write your code here.
        long sum=0;
        int i=0,j=0;
        int min,max;
        for(i=0;i<n-k;i++){
            min=nums.get(i);
            max=nums.get(i);
            for(j=i;j<i+k;j++){
                min=Math.min(min,nums.get(j));
                max=Math.max(max,nums.get(j));
                
                
            }
            sum=sum+min+max;
        }
        min=nums.get(i);
        max=nums.get(j);
        for(int l=i;l<n;l++){
            min=Math.min(min,nums.get(l));
            max=Math.max(max,nums.get(l));

        }
        sum=sum+min+max;
        return sum;
    }
}
