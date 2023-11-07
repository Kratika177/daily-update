import java.util.Map; 
import java.util.HashMap;
public class Solution {
    static char kthUnique(int n, String s, int k) {
        int c=0;
        Map<Character,Integer> mp=new HashMap<Character,Integer>();
        for(int i=0;i<s.length();i++){
            if(!mp.containsKey(s.charAt(i))){
                c=c+1;
                mp.put(s.charAt(i),c);
            }
        }
        for (Map.Entry<Character,Integer> entry : mp.entrySet()){
            //System.out.println(entry.getKey());
            if(entry.getValue()==k){
                return entry.getKey();
            }
            
        }
        return '?';
    }
}
