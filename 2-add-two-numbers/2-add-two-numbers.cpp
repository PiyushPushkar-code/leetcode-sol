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
        int carry=0;
        ListNode* first=l1;
        ListNode* second=l2;
        ListNode* dummy = new ListNode(0);
        ListNode* res = dummy;
        
        while(first!=NULL or second!=NULL or carry!=0){
            int msum=0;
            if(first!=NULL){
                msum+=first->val;
                first=first->next;
            }
             if(second!=NULL){
                msum+=second->val;
                second=second->next;
            }
            msum+=carry;
            carry=msum/10;
            res->next = new ListNode(msum%10);
            res=res->next;
        }
        return dummy->next;
    }
};