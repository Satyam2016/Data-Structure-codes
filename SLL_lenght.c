#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void get_length(struct node *head){
    int count = 0;
    struct node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    printf("Length of the linked list is: %d",count);
}


