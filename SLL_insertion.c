#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 
//Insertion at the beginning
struct node *insert_at_beginning(struct node *head,int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}

//Insertion at the end
struct node *insert_at_end(struct node *head,int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

//Insertion at a given position
struct node *insert_at_position(struct node *head,int data,int pos){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node *temp = head;
    for(int i=0;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}


//Insertion at the middle
struct node *insert_at_middle(struct node *head,int data){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node *slow = head;
    struct node *fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    newnode->next = slow->next;
    slow->next = newnode;
    return head;
}

//Insertion at the nth node from the end
struct node *insert_at_nth_from_end(struct node *head,int data,int n){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    struct node *slow = head;
    struct node *fast = head;
    for(int i=0;i<n;i++){
        fast = fast->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    newnode->next = slow->next;
    slow->next = newnode;
    return head;
}

 

