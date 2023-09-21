class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int dis=0;
        for(int i=0;i<moves.length();i++){
            if(moves.charAt(i)=='L'){
                dis-=1;
            }
            else if(moves.charAt(i)=='R'){
                dis+=1;
            }
        }
        for(int i=0;i<moves.length();i++){
            if(moves.charAt(i)=='_')
                dis=Math.max(Math.abs(dis+1),Math.abs(dis-1));
        }
        return Math.abs(dis);
    }
}
