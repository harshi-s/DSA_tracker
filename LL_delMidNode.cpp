class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* prev=NULL;
        ListNode* s=head;
        ListNode* f=head;

        while(f && f->next){
            prev=s;
            s=s->next;
            f=f->next->next;
        }

       prev->next=prev->next->next;
        return head;
    }
};
