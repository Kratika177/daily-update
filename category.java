class Solution {
    public String categorizeBox(int length, int width, int height, int mass) {
        int b=0,h=0;
        if((length>=10000 || width>=10000 || height>=10000) || (long)(length*width*height)>=Math.pow(10,9)){
            b=1;
        }
        
        if (mass>=100){
            h=1;
        }
        if(b==1 && h==1){
            return "Both";
        }
        if((b==0) && h==0){
            return "Neither";
        }
        if(b==1 && h==0){
            return "Bulky";
        }
        if(b==0 && h==1){
            return "Heavy";
        }
        return "";
    }
}
