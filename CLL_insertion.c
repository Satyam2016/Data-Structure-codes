#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// insert at the beginning
struct node *insert_at_beginning(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    struct node *temp = head;
    if (head == NULL)
    {
        newnode->next = newnode;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    head = newnode;
    return head;
}

// insert at the end
struct node *insert_at_end(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    struct node *temp = head;
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    return head;
}

// insert at the given position
struct node *insert_at_given_position(struct node *head, int data, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    struct node *temp = head;
    if (head == NULL)
    {
        newnode->next = newnode;
        head = newnode;
    }
    else
    {
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}


