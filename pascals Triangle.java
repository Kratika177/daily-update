class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> l=new ArrayList<>();
        if(numRows==0){
            return l;
        }
        for(int i=0;i<numRows;i++){
            List<Integer> l2=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0){
                    l2.add(1);
                }
                else if(j==i){
                    l2.add(1);
                }
                else if(j<i){
                    int x=l.get(i-1).get(j-1)+l.get(i-1).get(j);
                    l2.add(x);
                }
            }
            l.add(l2);
        }
        return l;
    }
}
