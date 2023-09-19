class Solution {
    public int minimumRecolors(String blocks, int k) {
       int r=0;
        List<Integer> l=new ArrayList<>();
        
        if(blocks.length()==k){
            for(int i=0;i<k;i++){
                if(blocks.charAt(i)=='W'){
                    r++;
                }
            }
            return r;
        }
        else{
            for(int i=0;i<blocks.length()-k+1;i++){
                r=0;
                for(int j=i;j<i+k;j++){
                    if(blocks.charAt(j)=='W'){
                        r++;
                    }
                }
                l.add(r);
                               
            }
           int min=l.get(0);
                for(int i=1;i<l.size();i++){
                    System.out.println("List = "+l.get(i));
                    if(l.get(i)<min){
                        min=l.get(i);
                    }
                }
            return min;
            
        }
    }
}
