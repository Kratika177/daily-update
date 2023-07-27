class RandomizedSet {
     HashSet<String> set=new HashSet<>();
     List<Integer> l=new ArrayList<>();
    public RandomizedSet() {
       
    }
    
    public boolean insert(int val) {
        if(set.contains(val+"")){
            return false;
        }
        set.add(val+"");
        l.add(val);
        return true;
    }
    
    public boolean remove(int val) {
         if(!set.contains(val+"")){
            return false;
        }
        set.remove(val+"");
        l.remove(new Integer(val));
        return true;
    }
    
    public int getRandom() {
        int r=(int)(Math.random()*set.size());
        return l.get(r);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
