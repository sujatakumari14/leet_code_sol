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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
         ListNode* h1=l1,*h2=l2;
         ListNode* dummy=  new ListNode();
         ListNode* temp=dummy;
        
        int carr=0;
        
        
        while(h1 || h2||carr){
            
            int sum=0;
            
                if(h1){
                    sum+=h1->val;
                    h1=h1->next;
                }
                
                if(h2){
                    
                    sum+=h2->val;
                    h2=h2->next;
                }
            
            sum+=carr;
            
            carr=sum/10;
            
             ListNode* node= new  ListNode(sum%10);
             temp->next=node;
             temp=temp->next;
         
    }
        return  dummy->next;
    }
    
};