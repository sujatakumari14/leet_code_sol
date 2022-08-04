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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
          vector<int> v;
          vector<vector<int>> res;
        
         queue<TreeNode* > q;
          
        if( root==NULL) return res;
         
        q.push(root);
         
         while(!q.empty()){
             
              int len=q.size();
             
             for(int i=0;i<len;i++){
             TreeNode *curr=q.front();
                 q.pop();
                 v.push_back(curr->val);
                 if(curr->left)
                     q.push(curr->left);
                 if(curr->right)
                     q.push(curr->right);
             }
             res.push_back(v);
             v.clear();
             
         }
         
       int   len=res.size();
        
         for(int i=0;i<len;i++){
             
              if(i%2!=0){
                  reverse(res[i].begin(),res[i].end());
              }
         }
         
     return res;   
          
    }
};