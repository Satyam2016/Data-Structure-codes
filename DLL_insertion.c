#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// insertion of node at the beginning of doubly linked list
struct node *insert_beg(struct node *head){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    return head;
}

// insertion of node at the end of doubly linked list
struct node *insert_end(struct node *head){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return head;
}

// insertion of node at the given position of doubly linked list
struct node *insert_pos(struct node *head){
    int pos;
    scanf("%d",&pos);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }
    return head;
}

 