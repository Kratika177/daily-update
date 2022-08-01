public static int countingValleys(int steps, String path) {
    // Write your code here
    int down=0;
    int valley=0;
    for(int i=0;i<steps;i++){
        if(path.charAt(i)=='D'){
            down++;         
        }
        if(path.charAt(i)=='U'){
            down--;
        }
        if(down==0 && path.charAt(i)=='U' ){
            valley++;
        }
        
        
    }
    return valley;
    }
