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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        ListNode* t = head;
        ListNode* t2=head->next;
        int k =0;
        while(k<count/2-1){
            t=t->next;
            t2=t2->next;
            k++;
        }
        t->next = t2->next;
        t2->next=NULL;
        return head;
        
    }
};