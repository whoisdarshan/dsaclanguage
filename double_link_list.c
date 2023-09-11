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
void insert_end(int val)
{
    struct node *ptr = head;

    struct node *temp = malloc(sizeof(struct node));
    temp->previous = NULL;
    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        a = temp;
        return;
    }

    a->next = temp;
    temp->previous = a;
    a = temp;
}
void delete_end()
{
    struct node *temp = a;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (a->previous != NULL)
    {
        a = a->previous;
        a->next = NULL;
    }
    else
    {

        head = NULL;
        a = NULL;
    }

    free(temp);
}

void insert_first(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->previous = NULL;
    if (head != NULL)
    {
        head->previous = temp;
    }
    head = temp;
}
void delete_first()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next != NULL)
    {
        head = head->next;
        head->previous = NULL;
    }
    else
    {

        head = NULL;
        a = NULL;
    }

    free(temp);
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty ....");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
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
int main()
{
    int choice, val, position;
    printf("\n1. Insert: ");
    printf("\n2. display: ");
    printf("\n3. Delete end :");
    printf("\n4. Insert first :");
    printf("\n5. delete first :");
    printf("\n6. mid insert :");
    printf("\n7. mid delete :");
    printf("\n8. Exit");

    while (1)
    {
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter your value");
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
            printf("enter your value :");
            scanf("%d", &val);
            insert_first(val);
            break;

        case 5:
            delete_first();
            break;

        case 6:
            printf("enter your value :");
            scanf("%d", &val);
            printf("enter your position :");
            scanf("%d", &position);

            mid_insert(val, position);
            break;
        case 7:

            printf("enter your position : ");
            scanf("%d", &position);
            mid_delete(position);
            break;

        case 8:

            printf("exit this program .");
            exit(0);

        default:
            printf("invalid option sorry .....");
        }
    }
}



