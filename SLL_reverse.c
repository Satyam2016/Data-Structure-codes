#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// reverse the linked list
struct node *reverse(struct node *head){
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next; 
    }
    head = prev;
    return head;
}
