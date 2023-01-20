DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
DoublyLinkedListNode* nn=new DoublyLinkedListNode (data);
if(data < llist->data){
    nn->next=llist;
    llist->prev=nn;
    llist=nn;
    return llist;
}

DoublyLinkedListNode* t=llist;

    while(t && t->next && t->next->data < data) t=t->next;
    
    nn->next=t->next;
    nn->prev=t;
    t->next=nn;
return llist;

}
