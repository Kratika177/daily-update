class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int X=0;
        int pre=0;
        List<Integer> l=new ArrayList();
        for(int i=0;i<operations.length;i++){
            if(operations[i]=="--X" ||operations[i]=="X--"){
                return X-=1;
            }
            else if(operations[i]="++X" || operations[i]"X++"){
                return X+=1;
            }

        }
        return X;

    }
}
