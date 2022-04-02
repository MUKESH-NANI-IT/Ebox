/*
Queue - Linked List Implementation
Consider implementing a Circular Queue using a Linked List.



Create a structure

struct node {

    int data ;

    struct node * link ;

};



Write a program to implement enQueue(addcirq) and deQueue(delcirq) operations on queue and to display the contents of the queue.
*/

//                                                              CODE
#include <stdio.h>

struct queue
{
    int contents[5];
    int front;
    int count;
};
void initQueue(struct queue *q)
{
    q->front = 0;
    q->count = 0;
}
void enQueue(struct queue *q, int element)
{
    if (q->count == 5)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->contents[(q->front + q->count) % 5] = element;
        q->count++;
    }
}

int deQueue(struct queue *q)
{
    if (q->count == 0)
    {
        printf("Queue is empty\n");
        return -1000;
    }
    int temp = q->contents[q->front];
    q->front = (q->front + 1) % 5;
    q->count--;
    return temp;
}
void display(struct queue q)
{
    if (q.count == 0)
    {
        printf(" {}\n");
        return;
    }
    int i;
    for (i = 0; i < q.count; i++)
        printf(" %d", q.contents[(q.front + i) % 5]);
    printf("\n");
}

int main()
{
    int n, choice;
    struct queue q;
    initQueue(&q);
    do
    {
        printf("Choice 1 : Enter element into Queue\nChoice 2 : Delete element from Queue\nChoice 3 : Display\nAny other choice : Exit\nEnter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted/entered\n");
            scanf("%d", &n);
            enQueue(&q, n);
            break;
        case 2:
            n = deQueue(&q);
            if (n != -1000)
                printf("The deleted element is %d\n", n);
            break;
        case 3:
            printf("The contents of the queue are");
            display(q);
            break;
        }
    } while (choice > 0 && choice < 4);
    return 0;
}