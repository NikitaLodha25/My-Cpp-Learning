//Given the root of a binary tree, invert the tree, and return its root.

class Solution {
public:  
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        swap(root->right,root->left);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
}