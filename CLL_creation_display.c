#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *create_CLL(struct node *head){
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
            temp = newnode;
        }
    }
    temp->next = head;
    return head;
}


void display_CLL(){
    struct node *temp;
    temp = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        do{
            printf("%d ", temp->data);
            temp = temp->next;
        }while(temp != head);
    }
}