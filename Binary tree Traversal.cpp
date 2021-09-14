class Solution {
public:
    void helperFunction(TreeNode* root,vector<int>&result){
        if(root==NULL)
            return;
        helperFunction(root->left,result);
        result.push_back(root->val);
        helperFunction(root->right,result);
        
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        helperFunction(root,result);
        
        return result;
        
    }
};
