class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *Cn = head;
        ListNode *prev = NULL;
        ListNode *next;
        while(Cn!=NULL){
            next = Cn->next;
            Cn->next=prev;
            prev=Cn;
            Cn=next;
        }
        return prev;

        
    }
};