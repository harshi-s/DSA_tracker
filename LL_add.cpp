class Solution
{
    private:
    void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
        
        ListNode* temp = new ListNode(val);
        
        if(head==NULL) {
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }}
        
        ListNode* add(ListNode* &l1, ListNode* &l2) {
        ListNode* dummy = new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        
        while(l1 || l2 || carry){
        int sum=0;
        
        if(l1) {
        sum += l1->val;
        l1=l1->next;
        }
        
        if(l2){
        sum += l2->val;
        l2=l2->next;
        }
        
        sum += carry;
        carry=sum/10;
        ListNode* node=new ListNode(sum%10);
        temp->next=node;
        temp=temp->next;
        }
        
        return dummy->next;
        }
          
