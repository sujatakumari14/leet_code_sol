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
    int widthOfBinaryTree(TreeNode* root) {
        
         if (root==NULL) return 0;
        int max=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            
            int len=q.size();
            int minI=q.front().second;
             int first,last;
            
           
            for(int i=0;i<len;i++){
                
                auto p=q.front();
                q.pop();
                TreeNode* node=p.first;
                int index=p.second-minI;
               
                if(i==0) {
                    first=index;
                }
                
                if(i==len-1){
                    last=index;
                }
                
              
             
                if(node->left){
                    q.push({node->left,index*2LL+1});
                }
                
                if(node->right){
                    q.push({node->right,index*2LL+2});
                }
                    
                
            }
            int width=last-first+1;
            if(width>max){
                max=width;
            }
            
        }
        
          
       return max;  
    }
       
};