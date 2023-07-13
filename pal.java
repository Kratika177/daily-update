class Solution {
    public boolean isPalindrome(int x) {
        int rev=0;
        int sum=0;
        int n=x;
        if(n>=0){
        while(n!=0){
            rev=n%10;
            sum=sum*10+rev;
            n=n/10;
        }
        return sum==x;
        }
        return false;

        
    }
}
