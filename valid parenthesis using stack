class Solution {
    public boolean isValid(String s) {
        Stack<Character> stc=new Stack<>();
        for(int i=0;i<s.length();i++)
        {
             char c=s.charAt(i);
             if(c=='('||c=='{'||c=='[')
             {
                 stc.push(c);
             }
        else if(!stc.empty()&&((s.charAt(i)==']'&&stc.peek()=='[')||(s.charAt(i)=='}'&&stc.peek()=='{')||(s.charAt(i)==')'&&stc.peek()=='('))){
                stc.pop();
            }
           else
               stc.push(c);
        }
        if(stc.empty())
        {
            return true;
        }
        else{
            return false;
        }
       
    }
}
