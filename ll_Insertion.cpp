class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
     Node * n= new Node(x);
     if(head==NULL) {
         head=n;
         return head;
     }
     n->next=head;
     head=n;
     return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node * n= new Node(x);
     if(head==NULL) {
         head=n;
         return head;
     }
     
          Node* temp=head;
     while(temp->next) temp=temp->next;
     
     temp->next=n;
     
     return head;
     
    }
};
