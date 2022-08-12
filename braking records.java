   public static List<Integer> breakingRecords(List<Integer> scores) {
    // Write your code here
    int min=scores.get(0);
    int max=scores.get(0);
    int cmin=0;
    int cmax=0;
    List<Integer> l=new ArrayList<>();
    for(int i=0;i<scores.size();i++){
       if(scores.get(i)<min){
           min=scores.get(i);
           cmin++;
       }
       if(scores.get(i)>max){
           max=scores.get(i);
           cmax++;
       }        
    }
     l.add(cmax);
     l.add(cmin);
     return l;
    }
