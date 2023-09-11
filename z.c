#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

struct node *head = NULL;
struct node *a = NULL; 

void insertend(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->previous = NULL;

    if (head == NULL)
    {
        head = temp;
        a = temp; 
        head->next = head;
        head->previous = head;
        return;
    }

    temp->next = head;
    temp->previous = a;
    a->next = temp;
    a = temp; 
}

void insert_first(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        a = temp;
        head->next = head;
        head->previous = head;
        return;
    }

    temp->next = head;
    temp->previous = a;
    a->next = temp;
    head->previous = temp;
    head = temp;
}


void deleteend()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = a;
    a = a->previous;
    a->next = head;
    head->previous = a;
    free(temp);
}


void delete_first()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    head->previous = a;
    a->next = head;
    free(temp);
}

// Modify the display function to print both forward and backward
void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Forward: ");
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");

    ptr = a;
    printf("Backward: ");
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->previous;
    } while (ptr != a);
    printf("\n");
}

int main()
{
    // Your main function remains the same as before
}
