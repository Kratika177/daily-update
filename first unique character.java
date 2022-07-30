class Solution {
    public int firstUniqChar(String s) {
        int flag=0;
        int index=0;
        if(s.length()==1)
            return 0;
        else
        {
            for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(i!=j)
                {
                    if(s.charAt(i)!=s.charAt(j))
                    {
                         flag=1;
                        continue;
                       
                    }
                    else
                    {
                          flag=0;
                          break;
                    }
                     
                }
               
            }
            if(flag==1)
            {
                index=i;
                break;
            }
               
            else
                continue;
          
            
        }
        if(flag==0)
            return -1;
        else
            return index;     
        }
       
 
    }
}
