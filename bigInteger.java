import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        BigInteger x=sc.nextBigInteger();
        BigInteger y=sc.nextBigInteger();
        System.out.println(x.add(y)+"\n"+x.multiply(y));
            }
}
