#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// create a CDLL
struct node *create(struct node *head)
{
    struct node *newnode, *temp;
    int choice = 1;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue (0, 1): ");
        scanf("%d", &choice);
    }
    temp->next = head;
    head->prev = temp;
    return head;
}

// display the CDLL
void display(struct node *head)
{
    struct node *temp = head;
    printf("The CDLL is: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("\n");
}