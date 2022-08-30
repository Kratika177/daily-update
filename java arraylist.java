import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        List<List<Integer>> list = new ArrayList<>();
        
        int n = sc.nextInt(); 
        
        while(n > 0){
            int l = sc.nextInt(); //Number of integers in single line
            List<Integer> arr =new ArrayList<>(); //Creating a list of array       

            while(l!= 0 ){
                   arr.add(sc.nextInt());
                   l--;
            }
            
            list.add(arr);
            n--;
        }
        int query = sc.nextInt();
        while(query!= 0){
            int x = sc.nextInt();
            int y = sc.nextInt();
            try {
                System.out.println(list.get(x-1).get(y-1));
            }
            catch (Exception e){
                System.out.println("ERROR!");
            }
            query--;
        }
    }
        
    }

