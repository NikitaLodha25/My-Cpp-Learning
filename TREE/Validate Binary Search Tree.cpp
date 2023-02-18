// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

class Solution {
public:
    vector<int> inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL) return ans;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        if (root == NULL) 
            return true;
        vector<int> ans;
        inorder(root,ans);
      for (int i = 1; i < ans.size(); i++) {
        if (ans[i-1] >= ans[i]) {
            return false;
        }
    }
    return true;
    }
};