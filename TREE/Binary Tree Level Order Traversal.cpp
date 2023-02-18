// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

class Solution {
public:
    void level(TreeNode* root,int l,vector<vector<int>>& ans) {
        if(root==NULL) return;
        if(l==ans.size())
            ans.push_back({root->val});
        else
            ans[l].push_back(root->val);
        level(root->left,l+1,ans);
        level(root->right,l+1,ans);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        level(root,0,ans);
        return ans;
    }
};