#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//Deletion at the beginning
struct node *delete_at_beginning(struct node *head){
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

//Deletion at the end
struct node *delete_at_end(struct node *head){
    struct node *temp = head;
    struct node *prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return head;
}

//Deletion at a given position
struct node *delete_at_position(struct node *head,int pos){
    struct node *temp = head;
    struct node *prev = NULL;
    for(int i=0;i<pos-1;i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

// Deletion after a given node
struct node *delete_after_node(struct node *head,int node){
    struct node *temp = head;
    struct node *prev = NULL;
    while(temp->data != node){
        prev = temp;
        temp = temp->next;
    }
    prev = temp->next;
    temp->next = prev->next;
    free(prev);
    return head;
}

//Deletion before a given node
struct node *delete_before_node(struct node *head,int node){
    struct node *temp = head;
    struct node *prev = NULL;
    while(temp->next->data != node){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

//Deletion of a given node
struct node *delete_node(struct node *head,int node){
    struct node *temp = head;
    struct node *prev = NULL;
    while(temp->data != node){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}
