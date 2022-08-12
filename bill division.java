    public static void bonAppetit(List<Integer> bill, int k, int b) {
    // Write your code here
    int cost=0;
    for(int i=0;i<bill.size();i++){
        if(bill.get(i)==bill.get(k))
        {
            cost+=0;
        }
        else
        {
            cost+=bill.get(i);
        }
       
    }
    if(cost/2==b)
        {
            System.out.println("Bon Appetit");
        }
    else
        {
            System.out.println(Math.abs(cost/2-b));
        }
    }
