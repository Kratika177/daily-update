class Solution {
    public int largestAltitude(int[] gain) {
        int pmax=0;
        int a=0;
        for(int i=0;i<gain.length;i++){
            a=a+gain[i];
            pmax=Math.max(pmax,a);
        }
        return pmax;
    }
}
