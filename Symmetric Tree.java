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
    public boolean isSymmetric(TreeNode root) {
        return test(root.left,root.right);
    }
    public boolean test(TreeNode p,TreeNode q){
        if(p==null && q==null){
            return true;
        }
        else if(p==null || q==null){
            return false;
        }
        else if(p.val!=q.val){
            return false;
        }
        else{
            return test(p.left,q.right) && test(p.right,q.left);
        }
    }
}
