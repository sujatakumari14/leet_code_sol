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
        

         ListNode * h1=headA,*h2=headB;
        
         unordered_map< ListNode *,int>mp;
        
        while(h1){
            mp[h1]++;
            h1=h1->next;
        }
        
        while(h2){
            
            if(mp.count(h2)!=0) return h2;
            h2=h2->next;
        }
        
        return NULL;
        
    }
};