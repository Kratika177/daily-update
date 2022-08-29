import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scanner=new Scanner(System.in);
        int b =1;
        while(scanner.hasNext()){
            String a = scanner.nextLine();
            System.out.println(b+" "+a);
            b++;            
        }
        scanner.close();
    }
}
