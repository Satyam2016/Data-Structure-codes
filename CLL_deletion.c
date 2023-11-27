#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// delete the first node
struct node *delete_first(struct node *head)
{
    struct node *temp = head;
    struct node *ptr = head;
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head->next;
    head = head->next;
    free(temp);
    return head;
}

// delete the last node
struct node *delete_last(struct node *head)
{
    struct node *temp = head;
    struct node *ptr = head;
    while(ptr->next != head)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    free(ptr);
    return head;
}

// delete the node at a given index
struct node *delete_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while(i != index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

// delete the node with a given value
struct node *delete_value(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while(q->data != value && q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

