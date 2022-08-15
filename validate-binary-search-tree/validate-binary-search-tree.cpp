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
    
    void inorder(TreeNode* root,vector<int>&v){
        
        if(root==NULL) return;
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    bool isValidBST(TreeNode* root) {
        
        vector<int>v;
        
        inorder(root,v);
        int flag=0;
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
             flag=1;
                break;
            }
        }   
        
        if(flag==1) return false;
        return true;
       
    }
};