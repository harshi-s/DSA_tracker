void insertAtPosition(Node* head, int pos, int data){
  Node* n=new Node(data);
  
  if(pos<0 || pos>size) cout<<"invalid";
  
  else if(pos==0) insertAtHead(n);
  
  else if(pos==size) insertAtTail(n);
  
  else {
        Node *temp=head;
        for(int i=0;i < pos-1; i++) {
          temp=temp->next;
        }
    
        n->next=temp->next;
        temp->next=n;
    }
}
