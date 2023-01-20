class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
        Node* c=head_ref;
      if(x==1){
          head_ref=c->next;
      }
      
      for(int i=1; i<x; i++){
          c=c->next;
      }
      
      if(c->next==NULL){
          c->prev->next=NULL;
          return head_ref;
          
      }
      
      if(x!=1){
          c->prev->next=c->next;
          c->next->prev=c->prev;
          return head_ref;
      }
      
    }
};
