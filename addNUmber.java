class Solution {
    public int findLen(int n){
        int len=0;
        do{
            len++;
            n=n/10;
        }while(n!=0);
        return len;
    }
    public int addDigits(int num) {
        int sum=0;
        int n=sum;
        

        do{
            sum=0;
            while(num!=0){
                sum=sum+(num%10);
                num=num/10;
            }
            num=sum;
        }while(findLen(sum)!=1);
        
        
    return sum;    
    }
}
