class Solution {
    public String interpret(String command) {
        String str="";
        for(int i=0;i<command.length();i++)
        {
            if(command.charAt(i)=='(')
            {
                if(command.charAt(i+1)==')')
                {
                  i=i+1;
                  str+="o";   
                }
                else if(command.charAt(i+1)=='a')
                {
                    if(command.charAt(i+2)=='l')
                    {
                        if(command.charAt(i+3)==')')
                        {
                            str+="al";
                            i=i+3;
                        }
                       
                    }
                    
                }
                
            }
            else
                str+=Character.toString(command.charAt(i));
        }
        return str;
    }
}
