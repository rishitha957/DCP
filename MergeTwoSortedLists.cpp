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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        struct ListNode *l3 = NULL;
        ListNode **h3 = &l3;
        while(h1!=NULL && h2!=NULL){
            if(h1->val < h2->val){
                *h3 = new ListNode(h1->val);
                h1 = h1->next;
                h3 = &((*h3)->next);
            }
            else if(h1->val > h2->val){
                *h3 = new ListNode(h2->val);
                h2 = h2->next;
                h3 = &((*h3)->next);
            }
            else if(h1->val == h2->val){
                *h3 = new ListNode(h1->val);
                h3 = &((*h3)->next);
                *h3 = new ListNode(h2->val);
                h3 = &((*h3)->next);
                h1 = h1->next;
                h2 = h2->next;
            }
            
        }
        while(h1!=NULL){
            *h3 = new ListNode(h1->val);
            h3 = &((*h3)->next);
            h1 = h1->next;
        }
        while(h2!=NULL){
            *h3 = new ListNode(h2->val);
            h3 = &((*h3)->next);
            h2 = h2->next;
        }
        return l3;
    }
};
