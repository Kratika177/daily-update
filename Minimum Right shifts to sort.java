class Solution {
    int s=0;
    List<Integer> l=new ArrayList<>();
    public void shift(){
        int last=l.get(l.size()-1);
        for(int i=l.size()-1;i>0;i--){
            l.set(i,l.get(i-1));
        } 
        l.set(0,last);
        System.out.println("list after shift");
        for(int i=0;i<l.size();i++){
            System.out.println(l.get(i));
        }   
        
    }
    public int minimumRightShifts(List<Integer> nums) {
        boolean flag=true;
        for(int i=0;i<nums.size();i++){
            l.add(nums.get(i));
        }
        while(s<l.size()){
        flag=true;
        for(int i=0;i<l.size()-1;i++){
            if(l.get(i)>l.get(i+1)){
                flag=false;
                break;
            }
        }
        if(flag==false){
            shift();
            s++;
        }
        else{
            break;
        }
        
        }
        if(flag==false){
            return -1;
        }
        return s;
                     
} }
