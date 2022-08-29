/****************************************************************

    Following is the class structure of the Pair class:

        class Pair
        {
        	int weight;
	        int value;
	        Pair(int weight, int value)
	        {
		        this.weight = weight;
		        this.value = value;
	        }
	        
        }
        
*****************************************************************/


public class Solution {
    public static Boolean comp(Pair a,Pair b){
        return ((double)a.value/(double)b.value)>((double)b.value/(double)a.value);
    }
    public static double maximumValue(Pair[] items, int n, int w) {
        Arrays.sort(items,items+n,comp);
        int cur=0;
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(curr+items[i].weight<=w){
                curr+=items[i].weight;
                ans=items[i].value;
            }
            else{
                int remain=w-curr;
                ans=ans+(items[i].value/(double)items[i].weight)*(doubler)remain;
                break;
            }
        }
        return ans;
    }
}
