class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st= new Stack<>();
        for(int i=0;i<tokens.length;i++){
            if(!tokens[i].equals("+") && !tokens[i].equals("-") && !tokens[i].equals("*") && !tokens[i].equals("/") ){
                st.push(Integer.parseInt(tokens[i]));
            }
            else{
                String c=tokens[i];
                System.out.println(c);
                int b=(int)(st.peek());
                st.pop();
                int a=(int)(st.peek());
                st.pop();
                if(tokens[i].equals("+")){
                    st.push(a+b);
                }
                if(tokens[i].equals("-")){
                    st.push(a-b);
                }
                if(tokens[i].equals("*")){
                    st.push(a*b);
                }
                if(tokens[i].equals("/")){
                    st.push(a/b);
                }

               
            }
        }
        return (int)st.peek();
    }
}
