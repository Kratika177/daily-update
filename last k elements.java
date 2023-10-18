import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        
        int[] arr=new int[n];
       
        int element;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        element=sc.nextInt();
        int newStart=arr.length-element;
        for(int i=newStart;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
}
