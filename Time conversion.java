    public static String timeConversion(String s) {
    // Write your code here
    String s1="";
    if(s.contains("AM")||s.contains("am")){
        if(s.charAt(0)=='1' && s.charAt(1)=='2'){
            s1=s.replaceFirst(Character.toString(s.charAt(0))+Character.toString              (s.charAt(1)), "00");
        }
        else{
            s1=s;
        }
    }
    else if(s.contains("PM")||s.contains("pm")){
        if(s.charAt(0)=='1' && s.charAt(1)=='2'){
            s1=s;
        }
        else{
            int x=Character.getNumericValue(s.charAt(0));
            int y=Character.getNumericValue(s.charAt(1));
            int z= (x*10)+y;
            z=12+z;
            String s2=Character.toString(s.charAt(0))+Character.toString(s.charAt             (1));
            s1=s.replaceFirst(s2,Integer.toString(z));   
        }
         
    }    
    if(s1.contains("AM")||s.contains("am")){
        s1= s1.replaceFirst("AM","");
        s1.replaceFirst("am", "");
     }
    else if(s1.contains("PM")||s.contains("pm")){
        s1= s1.replaceFirst("PM","");
        s1.replaceFirst("pm", "");
     } 
    return s1; 
    }
