import java.io.*;
import java.util.*;

public class Solution {
    public static String reverseWords(String s){
        String[] splitWords=s.split(" ");
        String ans="";
        String temp="";
        for(int i=0;i<splitWords.length;i++){
            temp="";
            for(int j=splitWords[i].length()-1;j>=0;j--){
                temp+=splitWords[i].charAt(j);
            }
            ans=ans+temp+" ";
        }
        return ans;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String ans;
        String string;
        Scanner sc=new Scanner(System.in);
        string=sc.nextLine();
        ans=reverseWords(string);
        System.out.println(ans);
        
    }
}
