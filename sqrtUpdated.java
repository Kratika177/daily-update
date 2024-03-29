class Solution {
    public int mySqrt(int x) {
        if(x==0)return 0;
        if(x==1)return 1;
        for(int i=1;i<=x/2;){
            if((long)i*i<x){
                i++;
                continue;
            }
            if((long)i*i==x) return (int)i;
            else if((long)i*i>x)return (int)i-1;
        }
        return x/2;
    }
}
