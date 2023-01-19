class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        for(int i=0; i<k-1; i++){
            temp=temp->next;
        }
     ListNode* s=head;
     ListNode* f=head;
        for(int i=0; i<k; i++){
            f=f->next;
        }

        while(f){
            s=s->next;
            f=f->next;
        }

   swap(temp->val, s->val);
   return head;

    }
};
