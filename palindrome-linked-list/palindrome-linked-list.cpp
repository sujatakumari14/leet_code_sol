/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL) return false;
        
        ListNode *h1=head;
        
        string s1,s2;
        
        while(h1){
            
            s1+=to_string(h1->val);
            h1=h1->next;
            
        }
        
        h1=reverse(head);
        
          while(h1){
            
            s2+=to_string(h1->val);
            h1=h1->next;
            
        }
        
        if(s1==s2) return true;
         
      return false;  
    }
    
     ListNode * reverse( ListNode * head){
         
          ListNode * prev=NULL,*curr=head,*nxt;
         
           while(curr){
               
               nxt=curr->next;
               curr->next=prev;
               prev=curr;
               curr=nxt;
           }
         return prev;
         
     }
};