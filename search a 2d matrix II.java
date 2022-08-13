class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int[] x=new int[matrix.length* matrix[0].length];
        int k=0;
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[i].length;j++){
                x[k]=matrix[i][j];
                k++;
            }
        }
        for(int i=0;i<x.length;i++){
            if(target==x[i]){
                return true;
            }
        }
        return false;
    }
}
