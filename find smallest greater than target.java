class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        List <Character> l= new ArrayList<>();
        for(int i=0;i<letters.length;i++){
            if(letters[i]>target){
                l.add(letters[i]);
            }
        }
        char minL='|';
        for(int i=0;i<l.size();i++){
            System.out.println(l.get(i));
            minL=(char)(Math.min((int)minL,(int)l.get(i)));
        }
        if(minL=='|'){
            return letters[0];
        }
        return minL;
    }
}
