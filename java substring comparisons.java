import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        for(int i = 0;i<s.length();i++){
            if(k+i<s.length()+1){
                String subString = s.substring(i,k+i);
                if(subString.compareTo(smallest)<=0){
                    smallest=subString;
                }
                if(subString.compareTo(largest)>0){
                    largest=subString;
                }
            }      
        }
        return smallest + "\n" + largest;
    }

