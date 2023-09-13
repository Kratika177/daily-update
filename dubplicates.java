class Solution {
    public void duplicateZeros(int[] arr) {
        int c=0;
        List<Integer> l=new ArrayList<>();
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0){
                l.add(0);
                c++;
            }
            l.add(arr[i]);
        }
        for(int i=0;i<arr.length;i++){
            arr[i]=l.get(i);
        }
    }
}
