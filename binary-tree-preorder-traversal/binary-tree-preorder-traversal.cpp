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
    vector<int> preorderTraversal(TreeNode*  root) {
        
        
          
         stack<TreeNode*>stack;
        stack.push(root);
        vector<int>v;
           if(root==NULL) return v;
        
          while(!stack.empty()){
              
              TreeNode* curr=stack.top();
              stack.pop();
               
              v.push_back(curr->val);
              if(curr->right)
              stack.push(curr->right);
              if(curr->left)
              stack.push(curr->left);
              
              
          }
        
        return v;
    }
};