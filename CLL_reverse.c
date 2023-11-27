#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// revese the CLL
struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = head->next;
    while(current->next != head)
    {
        current->next = prev;
        prev = current;
        current = next;
        next = next->next;
    }
    current->next = prev;
    head->next = current;
    head = current;
    return head;
}

