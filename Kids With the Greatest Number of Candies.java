class Solution {
    public boolean isGreatest(int[] candies,int candy){
        int max_candy=candies[0];
        for(int i=0;i<candies.length;i++){
            if(max_candy<=candies[i]){
                max_candy=candies[i];
            }
        }
        if(max_candy<=candy){
            return true;
        }
        else{
            return false;
        }
    }
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List <Boolean> result=new ArrayList<>();
        for(int i=0;i<candies.length;i++){
            if(isGreatest(candies,candies[i]+extraCandies)==true){
                result.add(true);
            }
            else if(isGreatest(candies,candies[i]+extraCandies)==false){
                result.add(false);
            }
        }
        for(int i=0;i<candies.length;i++){
            
        }
        return result;
    }
}
