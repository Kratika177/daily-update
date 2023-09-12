class Solution {
    public boolean isDivide(int i){
        int n=i;
        int rem=0;
        while(n>0){
            rem=n%10;
            if(rem==0){
                return false;
            }
            if(i%(rem)!=0){
                return false;
            }
            n=n/10;
        }
        return true;
    }
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> l=new ArrayList<>();
       

        for(int i=left;i<=right;i++){
            if(isDivide(i)){
                l.add(i);
            }
        }    
        return l;
    }
}
