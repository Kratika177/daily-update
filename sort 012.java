import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static void sort012(int[] arr)
    {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0){
                zero++;
            }
            if(arr[i]==1){
                one++;
            }
            if(arr[i]==2){
                two++;
            }
        }
        int k=0;
        for(int i=1;i<=zero;i++){
            arr[k]=0;
            k++;
        }
        for(int i=1;i<=one;i++){
            arr[k]=1;
            k++;
        }
        for(int i=1;i<=two;i++){
            arr[k]=2;
            k++;
        }
        
        //Write your code here
    }
}
