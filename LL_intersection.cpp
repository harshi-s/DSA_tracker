int intersectPoint(Node* head1, Node* head2)
{
    Node* p1=head1;
    Node* p2=head2;
    
    while(p1!=p2){
        p1=p1->next;
        p2=p2->next;
        
        if(p1==NULL) p1=head2;
        if(p2==NULL) p2=head1;
    }
    
    return p1->data;
}
