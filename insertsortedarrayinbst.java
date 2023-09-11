/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
     static TreeNode tr=null;
    public TreeNode insert(int nums[],int l,int h){
        if(l>h){
            return null;
        }
        int mid=l+(h-l)/2;
        TreeNode root =new TreeNode(nums[mid]);
        root.left=insert(nums,l,mid-1);
        root.right=insert(nums,mid+1,h);
        return root;
        
    }
    public TreeNode sortedArrayToBST(int[] nums) {
       
        return insert(nums,0,nums.length-1);
    }
}
