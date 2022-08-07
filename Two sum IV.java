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
    public boolean findTarget(TreeNode root, int k) {
        List<Integer>l1=new ArrayList<>();
        l1=inorder(root);
        for (int i = 0, j = l1.size() - 1; i < j;) {
            int sum = l1.get(i) + l1.get(j);
            if (sum == k) {
                return true;
            }
            if(sum<k)
                i++;
            else
                j--;
        }
        return false;
        
    }
    public List<Integer> inorder(TreeNode root){
        if(root==null){
            return l;
        }
        
        l=inorder(root.left);
        l.add(root.val);
        l=inorder(root.right);
        return l;
    }
    private
    List<Integer> l=new ArrayList<>();
}
