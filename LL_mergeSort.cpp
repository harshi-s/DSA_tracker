#include <iostream>
using namespace std;
 
Node *merge(Node *a, Node *b)
{
    // base case
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;
 
    // recursive case
    // take a head pointer
    Node *c;
 
    if(a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
 
    return c;
}
 
Node *mid_point(Node *head)
{
    // base case
    if(head == NULL || head->next == NULL)
        return head;
 
    // recursive case
    Node *fast = head;
    Node *slow = head;
 
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
 
        if(fast->next == NULL)
            break;
 
        fast = fast->next;
        slow = slow->next;
    }
 
    return slow;
}
 
Node* merge_sort(Node *head)
{
    // base case
    if(head == NULL || head->next == NULL)
        return head;
 
    // recursive case
    // Step 1: divide the linked list into
    // two equal linked lists
    Node *mid = mid_point(head);
    Node *a = head;
    Node *b = mid->next;
 
    mid->next = NULL;
 
    // Step 2: recursively sort the smaller
    // linked lists
    a = merge_sort(a);
    b = merge_sort(b);
 
    // Step 3: merge the sorted linked lists
    Node *c = merge(a, b);
 
    return c;
}
 
