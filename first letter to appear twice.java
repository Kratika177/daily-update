class Solution {
    public char repeatedCharacter(String s) {
        List<Character> l=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            l.add(s.charAt(i));
        }
        Map<Character,Boolean> mp=new HashMap<>();
        Character c='0';
        for(Character i:l){
            if(mp.get(i)==null){
                mp.put(i,true);
            }
            else{
                c=i;
                break;
            }
        }
        return c;
    }
}
