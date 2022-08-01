/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        
        
         ListNode *slow=head;
         ListNode *fast=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
              slow=slow->next;
            if(fast==slow) return startCyc(head,slow);
          
            
        }
        
        return NULL;
        
    }
    
    ListNode * startCyc(ListNode * head,  ListNode *slow){
        
        while(true){
            
            if(head==slow) return head;
            
            head=head->next;
            slow=slow->next;
        }
    }
};