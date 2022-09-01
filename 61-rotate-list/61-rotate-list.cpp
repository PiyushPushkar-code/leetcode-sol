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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head) return head;
        ListNode *curr=head;
        ListNode *newhead=head;
        int count=1;
        while(curr->next!=NULL){
            curr=curr->next;
            count++;
        }
        curr->next=head;
        if(k %= count){ 
        for(int i=0; i<count-k ; i++){
            curr=curr->next;
        }
        }
        ListNode *ans=curr->next;;
        curr->next=NULL;
        return ans;
    }
};