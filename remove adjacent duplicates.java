//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
        while(t-->0){
            String S = br.readLine();
            Solution ob = new Solution();
            String ans = ob.rremove(S).trim();
            if(ans.length() == 0)
                System.out.println();
            else
                System.out.println(ans);
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    String solve(String s){
        String res="";
        int i=0,n=s.length();
        while(i<n){
            if(i<n-1 && s.charAt(i)==s.charAt(i+1)){
                while(i<n-1 && s.charAt(i)==s.charAt(i+1)){
                    i++;
                }
            }
            else{
                res+=s.charAt(i);
            }
            i++;
        }
        return res;
    }
    String rremove(String s) {
        String res=s,temp="";
        while(temp.length()!=res.length()){
            temp=res;
            res=solve(res);
       // code here
        }
     return res;
    }
}
