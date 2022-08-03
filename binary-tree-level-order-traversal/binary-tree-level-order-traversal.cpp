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
    vector<vector<int>> levelOrder(TreeNode* root) {
         
        
           queue<TreeNode*> q;
           vector<int>v;
           vector<vector<int>>res;
           if(root==NULL)return res;
         
           q.push(root);
        
        while(!q.empty()){
             
               int len=q.size();
              
               for(int i=0;i<len;i++){
                   
                    TreeNode* curr=q.front();
                    q.pop();
                    
                   if(curr->left)
                        q.push(curr->left);
                   if(curr->right)
                       q.push(curr->right);
                   
                   v.push_back(curr->val);
                   
               }
            res.push_back(v);
            v.clear();
            
        }
            
       return res; 
    }
};