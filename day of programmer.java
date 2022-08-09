public static String dayOfProgrammer(int year) {
    // Write your code here
    int feb=0;
    if(year<1918){
        if(year%4==0){
           feb=29;
        }
        else
           feb=28;
    }
    else if(year>1918){
        if((year%4==0 && year%100!=0) || year%400==0){
           feb=29;
        }
        else{
           feb=28;
        }
    }    
    else
       feb=15;
       
    int d=256-(31+feb+31+30+31+30+31+31);
    return Integer.toString(d)+".09."+Integer.toString(year);           
    }
