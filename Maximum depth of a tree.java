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
    public int maxDepth(TreeNode root) {
        if(root==null){
            return 0;
        }
        else{
            int ld=0,rd=0;
            if(root.left!=null)
                 ld=maxDepth(root.left);
            if(root.right!=null)
                 rd=maxDepth(root.right);
            return Math.max(ld,rd)+1;
        }
    }
}
