#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// deletion of a node from the beginning of the CDLL
struct node *delete_beginning(struct node *head)
{
    struct node *temp, *temp1;
    if(head == NULL)
    {
        printf("CDLL is empty\n");
    }
    else if(head->next == head)
    {
        printf("Deleted element is %d\n", head->data);
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp1 = head;
        head = head->next;
        head->prev = temp;
        temp->next = head;
        printf("Deleted element is %d\n", temp1->data);
        free(temp1);
    }
    return head;
}


// deletion of a node from the end of the CDLL
struct node *delete_end(struct node *head)
{
    struct node *temp, *temp1;
    if(head == NULL)
    {
        printf("CDLL is empty\n");
    }
    else if(head->next == head)
    {
        printf("Deleted element is %d\n", head->data);
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp1 = temp->prev;
        temp1->next = head;
        head->prev = temp1;
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
    return head;
}

// deletion of a node from the specified position of the CDLL
struct node *delete_position(struct node *head)
{
    struct node *temp, *temp1;
    int pos, i = 1;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(head == NULL)
    {
        printf("CDLL is empty\n");
    }
    else if(head->next == head)
    {
        printf("Deleted element is %d\n", head->data);
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        while(i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp1 = temp->prev;
        temp1->next = temp->next;
        temp->next->prev = temp1;
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
    return head;
}

