class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int[] x=new int[candies.length] ;
        List<Boolean> b= new ArrayList<Boolean>();    
        for(int i=0;i<candies.length;i++)
        {
            x[i]=candies[i]+extraCandies;
        }
        int max_candy=candies[0];
        for(int i=0;i<candies.length;i++)
        {
            if(max_candy<candies[i])
                max_candy=candies[i];
        }
        for(int i=0;i<candies.length;i++)
        {
            if(x[i]>=max_candy)
                b.add(i,true);
            else
                b.add(i,false);
        }
        return b;
    }
}
