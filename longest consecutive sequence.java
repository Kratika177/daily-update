import java.util.* ;
import java.io.*; 
public class Solution {
    public static int lengthOfLongestConsecutiveSequence(int[] arr, int N) {
        // Write your code here.
        Set<Integer> h=new HashSet<>();
        for(int i : arr){
            h.add(i);
        }
        int longest=0;
        for(int i:arr){
            if(!h.contains(i-1)){
                int cur=i;
                int curstreak=1;
                while(h.contains(cur+1)){
                    cur=cur+1;
                    curstreak++;
                }
                longest=Math.max(longest,curstreak);
            }
        }
        return longest;
    }
}
