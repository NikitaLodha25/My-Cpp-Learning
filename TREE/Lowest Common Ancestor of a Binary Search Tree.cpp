// Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val==p->val || root->val==q->val) return root;
        TreeNode* rightt=lowestCommonAncestor(root->right,p,q);
        TreeNode* leftt=lowestCommonAncestor(root->left,p,q);
        if(leftt==NULL) return rightt;
        if(rightt==NULL) return leftt;
        return root;
    }
};