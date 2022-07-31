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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //try solving using different approch
        
        ListNode * h1=headA,*h2=headB;
        
         int l1=0,l2=0;
        
         while(h1){
             l1++;
             h1=h1->next;
         } 
        
        while(h2){
            l2++;
            h2=h2->next;
        }
        
        
        int t=abs(l1-l2);
        
        
        if(l1>l2){
            
            while(t){
                
                headA=headA->next;
                t--;
                
            }
        }
        
        
        if(l1<l2){
            
            while(t){
                
                headB=headB->next;
                t--;
                
            }
        }
        
        while(headA&&headB){
            if(headA==headB) return headA;
            
            headA=headA->next;
            headB=headB->next;
            
        }
        
        return NULL;
        
        
        
        
    }
};