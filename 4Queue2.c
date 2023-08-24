#include <stdio.h>
#include <stdlib.h>

#define n 10

struct Queue
{
    int a[n];
    int front;
    int rear;
};

void initialize(struct Queue *q)  {
    q->front = -1;
    q->rear = -1;
}



void display(struct Queue *q)
{
    if (q->front <  0)
    {
        printf("Queue is empty.\n");
    }
    else
    {
       
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d ", q->a[i]);
        }
        printf("\n");
    }
}




void insert(struct Queue *q, int value)
{
    if (q->rear >= n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (q->front< 0)
        {
            q->front = 0;
            
        }
        q->rear++;
        q->a[q->rear] = value;
        printf("%d inserted into the queue.\n", value);
    }
}

void delete(struct Queue *q)
{
    if (q->front < 0)
    {
        printf("Queue is empty, cannot delete.\n");
    }
    else
    {
        printf("%d deleted from the queue.\n", q->a[q->front]);
        q->front++;
        if (q->front > q->rear)
        {
            q->front = q->rear = -1;
        }
    }
}



int main()
{
    struct Queue q;
    initialize(&q);

    insert(&q, 10);
    insert(&q, 20);
    insert(&q, 30);

    display(&q);

    delete (&q);
    display(&q);

    return 0;
}
