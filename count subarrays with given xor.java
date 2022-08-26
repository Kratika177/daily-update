import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {
	public static int subarraysXor(ArrayList<Integer> arr, int x) {
		// Write your code here.
        int count=0;
        int xor=0;
        HashMap<Integer,Integer> freq=new HashMap<>();
        for(int i=0;i<arr.size();i++){
            xor=xor^arr.get(i);
            if(freq.get(xor^x)!=null){
                count+=freq.get(xor^x);
            }
            if(xor==x){
                count++;
            }
            if(freq.get(xor)!=null){
                freq.put(xor,freq.get(xor)+1);
            }
            else{
                freq.put(xor,1);
            }
        }
        return count;
	}
}
