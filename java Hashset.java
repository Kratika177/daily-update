import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

 public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        String [] pair_left = new String[t];
        String [] pair_right = new String[t];
        
        for (int i = 0; i < t; i++) {
            pair_left[i] = s.next();
            pair_right[i] = s.next();
        }
Set<String> set = new HashSet<>();
    String name = "";
    int count = 0;
    
    // for each input
    for (int i = 0; i < t; i++) {
        // construct name from left and right part
        name = pair_left[i] + " " + pair_right[i];
        // try to add constructed name to set
        // if sucessfull increase counter
        if (set.add(name)){
            count++;
        }
        // print counter each iteration
        System.out.println(count);                
    }
//Write your code here

    }
