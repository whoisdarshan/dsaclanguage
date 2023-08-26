#include <stdio.h>
#include <stdlib.h>

#define n 5

int queue[n];
int front = -1, rear = -1;

void insert(int value)
{
    if (rear >= n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front < 0)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d inserted into the queue.\n", value);
    }
}

void display()
{
    if (front < 0)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void delete()
{
    if (front < 0)
    {
        printf("Queue is empty...\n");
    }
    else
    {
        printf("%d deleted from the queue.\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

insertfirst(int value)
{

}

int main()
{
    int choice, value;

    while (1)
    {
        
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
