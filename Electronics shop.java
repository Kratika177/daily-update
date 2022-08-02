static int getMoneySpent(int[] keyboards, int[] drives, int b) {
         int[] cost=new int[keyboards.length*drives.length];
         int k=0;
         for(int i=0;i<keyboards.length;i++){
             for(int j=0;j<drives.length;j++){
                 int c=keyboards[i]+drives[j];
                 if(c<=b){
                    cost[k]=c;
                    k++;                      
                 }
                 
             }
         }
         int maxc=cost[0];
         for(int i=1;i<cost.length;i++){
             maxc=Math.max(cost[i],maxc);
         }
         if(maxc<=0){
             return -1;
         }
        return maxc; 

    }
