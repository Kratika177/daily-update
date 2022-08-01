    public static int sockMerchant(int n, List<Integer> ar) {
    // Write your code here
    Collections.sort(ar);
    int pair=0;
    for(int i=0;i<ar.size();i++){
                   
             if(i!=n-1 && ar.get(i)==ar.get(i+1))
                {
                    i++;                    
                    pair++;
                }
           
    }
    return (pair);    
    }
 

    }
