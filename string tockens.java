import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        s = s.trim();

       if(s.length()<=0){
         System.out.println(0);
         return;

      }else{        
        String st[]=s.split("[ ?._'@!,]+");
        System.out.println(st.length);
        for(int i=0;i<st.length;i++){
            System.out.println(st[i]);
        }
      }
        scan.close();
        
    }
}

