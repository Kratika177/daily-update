class Solution {
    public String sortSentence(String s) {
        String[] st=s.split(" ");
        int[] n=new int[st.length];
        for(int i=0;i<st.length;i++)
        {
            for(int j=i+1;j<st.length;j++)
            {
                String temp="";
                if(Character.getNumericValue(st[i].charAt(st[i].length()-1)) > Character.getNumericValue(st[j].charAt(st[j].length()-1)))
                {
                    temp=st[i];
                    st[i]=st[j];
                    st[j]=temp;
                }
            }
                   
        }
         for(int i=0;i<st.length;i++)
        {
            st[i]=st[i].substring(0,st[i].length()-1);
        }
        String se="";
        for(int i=0;i<st.length;i++)
        {
            se=se+st[i]+" "; 
        }
        se=se.substring(0,se.length()-1);
       
            
           
        return se;
    }
}
