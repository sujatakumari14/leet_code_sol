/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void parentAs( TreeNode*root, unordered_map<TreeNode*,TreeNode*>&upper){
        
         queue<TreeNode*>q;
        
            q.push(root);
            upper[root]=root;
            while(!q.empty()){

                   TreeNode* node=q.front();
                    q.pop();

                 if(node->left){
                     q.push(node->left);
                     upper[node->left]=node;
                 } 
            
                    if(node->right){
                        q.push(node->right);
                        upper[node->right]=node;
                    }

                    }                  
               } 
    
    
  void dfs(TreeNode* target, int k,unordered_map<TreeNode*,TreeNode*>upper, vector<int>&res){
        
         map<TreeNode* ,int>visited;
           queue<TreeNode*>q;
     
         q.push(target);
         visited[target]=1;
      int dis=0;
      
          while(!q.empty()&& k>0){
              
               int len=q.size();
              
               
               if(dis==k) break;
                dis++;
              
              for(int i=0;i<len;i++){
                  
                  TreeNode* node=q.front();
                  q.pop();
                   
                   if(node->left&& visited[node->left]==0){
                       
                       q.push(node->left);
                       visited[node->left]=1;
                   }
                  
                  if(node->right && visited[node->right]==0){
                      
                      
                      q.push(node->right);
                       visited[node->right]=1;
                  }
                  
                  if(visited[upper[node]]==0){
                     
                      q.push(upper[node]);
                      visited[upper[node]]=1;
                  }
              }
          }
      
        
          while(!q.empty()){
              
              res.push_back(q.front()->val);
              q.pop();
          }
        
  }  
    
  vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    
        unordered_map<TreeNode*,TreeNode*>upper;
        vector<int>res;
         
        parentAs(root,upper);
        
        dfs(target,k,upper,res);      
      return res;
    }
};