class Solution {
    public double average(int[] salary) {
        Arrays.sort(salary);
        double sum=0;
        double n=0;
        for(int i=1;i<salary.length-1;i++){
            sum=sum+salary[i];
            n++;
        }
        return sum/n;
    }
}
