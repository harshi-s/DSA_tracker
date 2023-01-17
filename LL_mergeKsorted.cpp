class Solution {
public:
   struct sort {
       bool operator() (ListNode* x, ListNode* y){
           bool flag;
           if(x->val > y->val) flag =true;
           else flag=false;

           return flag;
       }
   };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, sort> ans;

        for(ListNode* i:lists){
            if(i!=NULL) ans.push(i);
        }

        ListNode* head=NULL;
        ListNode* temp=NULL;
       
       while(!ans.empty()){
           ListNode* x=ans.top();
           ans.pop();

           if(head==NULL) {
               head=x;
               temp=head;

           }
           else {
               temp->next=x;
               temp=x;
           }

           if(x->next!=NULL){
               ans.push(x->next);
           }
       }
return head;
    }
};
