//Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

class Solution {
public:
    
     vector<int> inorder(TreeNode* root, int k, vector<int>& elements){
        if(root==NULL) return elements;
        
        inorder(root->left, k, elements);
        if(elements.size() == k) return elements;
        elements.push_back(root->val);
        if(elements.size() == k) return elements;
        inorder(root->right, k, elements);
        
        return elements;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> elements;
        inorder(root, k, elements);
        return elements[k-1];
    }
};