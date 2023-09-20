class Solution {
    public int countPairs(List<List<Integer>> coordinates, int k) {
        int c=0;
        for(int i=0;i<coordinates.size()-1;i++){
            for(int j=i+1;j<coordinates.size();j++){
                    if(((coordinates.get(i).get(0)^coordinates.get(j).get(0))+(coordinates.get(i).get(1)^coordinates.get(j).get(1)))==k){
                        c++;
                    }
            }
        }
        return c;
    }
}
