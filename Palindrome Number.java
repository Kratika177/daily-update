class Solution {
public:
    bool isPalindrome(int x) 
    {

        int num=x;
        double rev=0;
        if(x<0)
            return false;
            
               do{
                      int mod=x%10;
                      rev=(rev*10)+mod;
                      x=x/10;     
                }while(x!=0);
       
        return num==rev;   

        

   }
};
