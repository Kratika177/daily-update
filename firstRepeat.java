class Solution
{
    char firstRep(String S)
    {
        // your code here
        char c='1';
        List<Character> l=new ArrayList<>();
        HashMap<Character,Integer> mp=new HashMap<>();
        for(int i=0;i<S.length();i++){
                mp.put(S.charAt(i),mp.getOrDefault(S.charAt(i),0)+1);
        }
        for(Character d: mp.keySet()){
            if(mp.get(d)>1){
                l.add(d);
            }
        }
        for(int i=0;i<S.length();i++){
            for(int j=0;j<l.size();j++){
                if(S.charAt(i)==l.get(j)){
                    return S.charAt(i);
                }
            }
        }
        return c;
    }
}
