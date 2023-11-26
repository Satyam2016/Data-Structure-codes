#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// creation of doubly linked list
struct node *create_dll(struct node *head){
    int n;
    scanf("%d",&n);
    struct node *temp = NULL;
    for(int i=0;i<n;i++){
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev= temp;
            temp = newnode;
        }
    }
    return head;
}   
