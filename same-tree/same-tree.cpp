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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
          if(p==NULL || q==NULL) return (p==q);
        
          if(p->val!=q->val) return false;
       
            bool b1= isSameTree(p->left,q->left);
             if(b1==false) return false;
         
           b1= isSameTree(p->right,q->right);
           if(b1==false) return false;
        
        return true;
    }
};