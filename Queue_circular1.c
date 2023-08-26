#include <stdio.h>
#define n 5
int a[n];
int f = -1, r = -1;

void display()
{
   int i = f;
    if (f < 0)
    {
        printf("queue is empty  ...\n");
    }
    else
    {
        do
        {
            printf("%d ", a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
        printf("\n");
        
    }
    
}

void insertend(int val)
{
    if  (r < 0)
    {
    
        f = r = 0;
        a[r] = val;
    }    
     
    
     else   if ((r + 1) % n == f)
        {
            printf("queue is full ..../n");
        }
        else
        {
            r = (r + 1) % n;
            a[r] = val;
        }
        
    
}

void delete()
{
    if (f < 0)
    {
    
        printf("queue is empty ...\n");
    }   
       else if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f = (f + 1) % n;
        }
        
    
}

int main()
{
    int choice, val;

    do
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
            scanf("%d", &val);
            insertend(val);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
