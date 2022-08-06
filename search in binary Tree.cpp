/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        if(root==nullptr){
            return root;
        }
        if(val<root->val){
            temp=searchBST(root->left,val);
        }
        else if(val>root->val){
            temp=searchBST(root->right,val);
        }
        else{
            temp=root;
        }
        return temp;
    }
};
