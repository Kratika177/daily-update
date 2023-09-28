class Solution {
    public int[] countBits(int n) {
        int c=0;
        List<Integer> l=new ArrayList<>();
        for(int i=0;i<=n;i++){
            c=0;
            String ans=Integer.toBinaryString(i);
            System.out.println(ans);
            for(int j=0;j<ans.length();j++){
                if(ans.charAt(j)=='1'){
                    c++;    
                }
            }
            l.add(c);
        }
        int[] a=new int[l.size()];
        for(int i=0;i<l.size();i++){
            a[i]=l.get(i);
        }
        return a;
    }
}
