#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// reverse of doubly linked list
struct node *reverse_dll(struct node *head){
    struct node *temp = head;
    struct node *temp1 = NULL;
    while(temp != NULL){
        temp1 = temp->prev;
        temp->prev = temp->next;
        temp->next = temp1;
        temp = temp->prev;
    }
    head = temp1->prev;
    return head;
}
 