#include <iostream>
using namespace std;
 
Node *merge(Node *a, Node *b)
{
    // base case
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;
 
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
 
    while(fast && fast->next)
    {
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
 
    Node *mid = mid_point(head);
    Node *a = head;
    Node *b = mid->next;
 
    mid->next = NULL;
 
    a = merge_sort(a);
    b = merge_sort(b);
 
    Node *c = merge(a, b);
 
    return c;
}
 
