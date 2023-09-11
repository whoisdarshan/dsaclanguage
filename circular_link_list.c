#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = head;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->next = head;
}

void insert_first(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        head->next = head;
        return;
    }

    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    temp->next = head;
    ptr->next = head;

    head = temp;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *p = NULL;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }

    if (p == NULL)
    {
        head = NULL;
    }
    else
    {
        p->next = head;
    }

    free(ptr);
}

void delete_first()
{
    struct node *temp = head;
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }

    if (ptr == head)
    {
        head = NULL;
    }
    else
    {
        head = head->next;
        ptr->next = head;
    }

    free(temp);
}

void mid_insert(int val, int position)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    if (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void mid_delete(int position)
{
    struct node *ptr = head;
    struct node *p = NULL;
    if (ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

int main()
{
    int choice, val, position;
    printf("\n1. Insert ");
    printf("\n2. Display ");
    printf("\n3. Delete end");
    printf("\n4. Insert first");
    printf("\n5. Delete first");

    printf("\n6. Exit");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter your value :");
            scanf("%d", &val);
            insertend(val);
            break;

        case 2:
            display();
            break;
        case 3:
            deleteend();
            break;
        case 4:
            printf("insert at beginning");
            scanf("%d", &val);
            insert_first(val);
            break;
        case 5:
            delete_first();
            break;
        case 6:
            printf("enter your value :");
            scanf("%d",&val);
            printf("enter your position :");
            scanf("%d",&position);
            mid_insert(val,position);
            break;
        case 7:
            printf("enter your position :");
            scanf("%d",&position);
            mid_delete(position);
            break;



        case 8:
            printf("exit this program :");
            exit(0);
        default:
            printf("invalid input \n");
        }
    }
}
