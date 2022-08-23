import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

	public static int LongestSubsetWithZeroSum(ArrayList<Integer> a) {
		// Write your code here.
        int  max = 0;
        for(int i = 0; i < a.size(); ++i){
            int sum = 0;
            for(int j = i; j < a.size(); ++j){
                sum += a.get(j);
                if(sum == 0){
                    max = Math.max(max, j-i+1);
                }
            }
        }
        return max;       
	}
}
