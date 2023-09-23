class Solution {
    public int longestString(int x, int y, int z) {
        int len=0;
        len=(Math.min(x,y)*2+z)*2;
        if(x!=y){
            len+=2;
        }
        return len;
    }
}
