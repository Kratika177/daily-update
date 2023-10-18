import java.io.*;
import java.util.*;

public class Solution {
    public static void removeDuplicate(String string){
        HashMap<Character,Integer> mp=new HashMap<>();
        String ans="";
        for(int i=0;i<string.length();i++){
            if(!mp.containsKey(string.charAt(i))){
                System.out.print(string.charAt(i));
            }
            mp.put(string.charAt(i),mp.getOrDefault(string.charAt(i),0)+1);
        }
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String ans;
        String string;
        Scanner sc=new Scanner(System.in);
        string =sc.nextLine();
        removeDuplicate(string);
    }
}
