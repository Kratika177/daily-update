class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int c=0;
        int[] oned=new int[matrix.length*matrix[0].length];
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[i].length;j++){
                oned[c++]=matrix[i][j];
                           }
        }
        for(int i=0;i<oned.length;i++){

            if(oned[i]==target)
                return true;
            
        }
        return false;
    }
}
