class Solution {
    public int mySqrt(int x) {
        int c=1;
        while(!(c*c>x)){
            if(c*c<x){
                c++;
            }
            else if(c*c==x){
                return c;
            }
        }
        return c-1 ;
    }
}
