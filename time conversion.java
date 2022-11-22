import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String timeConversion(String s) {
    // Write your code here
    String end=s.substring(s.length()-2,s.length());
    String ini=s.substring(0,2);
    System.out.println(ini);
    System.out.println(end);
    String st[]=s.split(":");
    String ans=new String();
    if(end.equals("AM") && ini.equals("12")){
        st[0]="00";
        ans=st[0]+":"+st[1]+":"+st[2];
        ans=ans.substring(0,ans.length()-2);
    }
    else if(end.equals("AM") && !ini.equals("12")){
        ans=st[0]+":"+st[1]+":"+st[2];
        ans=ans.substring(0,ans.length()-2);
    }
    else if(end.equals("PM") && !ini.equals("12")){
        ans=Integer.toString(Integer.parseInt(st[0])+12)+":"+st[1]+":"+st[2];
        ans=ans.substring(0,ans.length()-2);
    }
    else if(end.equals("PM") && st[0].equals("12")){
        ans=st[0]+":"+st[1]+":"+st[2];
        ans=ans.substring(0,ans.length()-2);
    }
    return ans;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.timeConversion(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
