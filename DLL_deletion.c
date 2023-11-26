#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//deletion of node at the beginning of doubly linked list
struct node *delete_beg(struct node *head){
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    return head;
}

//deletion of node at the end of doubly linked list
struct node *delete_end(struct node *head){
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    return head;
}

//deletion of node at the given position of doubly linked list
struct node *delete_pos(struct node *head){
    int pos;
    scanf("%d",&pos);
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        struct node *temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    return head;
}

//deletion of node with given value of doubly linked list
struct node *delete_val(struct node *head){
    int val;
    scanf("%d",&val);
    if(head == NULL){
        printf("List is empty\n");
    }
    else{
        struct node *temp = head;
        while(temp->data != val){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    return head;
}

