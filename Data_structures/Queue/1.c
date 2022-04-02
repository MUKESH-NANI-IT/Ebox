/*Queue : Array Implementation using element count

Consider implementing a fixed size queue of maximum size 5 using an array.



Create a structure

struct queue {

    int contents[5];

    int front;

    int count;

};



Note that the array contents holds the contents of the queue and the integer front stores the index of the front element in the queue.
count stores the count of elements in the queue.

Write a program to implement enQueue and deQueue operation on queue and to display the contents of the queue.



In the initQueue function intialize the value of front and count to 0.

Print the message “Queue is full” in the enQueue function when an attempt is made to insert a data into a full queue.

Print the message “Queue is empty” in the deQueue function and return the value -1000 when an attempt is made to delete data from an empty queue.



Function specifications:

void initQueue(struct queue * q)
void enQueue(struct queue * q, int element)
int deQueue(struct queue * p)
void display(struct queue q)
*/
//                          CODE
#include <stdio.h>
#include <string.h>
struct queue
{
    int contents[5];
    int front;
    int count;
};

void initQueue(struct queue *q);
void enQueue(struct queue *q, int element);
int deQueue(struct queue *q);
void display(struct queue q);
void printMenu();

int main()
{
    struct queue p;
    int data, ch, data1;
    initQueue(&p);
    do
    {
        printMenu();
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted/entered\n");
            scanf("%d", &data);
            enQueue(&p, data);
            break;
        case 2:
            data1 = deQueue(&p);
            if (data1 != -1000)
                printf("The deleted element is %d\n", data1);
            break;
        case 3:
            printf("The contents of the queue are ");
            display(p);
            printf("\n");
            break;
        default:
            return 0;
        }
    } while (1);
    return 0;
}

void printMenu()
{
    printf("Choice 1 : Enter element into Queue\n");
    printf("Choice 2 : Delete element from Queue\n");
    printf("Choice 3 : Display\n");
    printf("Any other choice : Exit\n");
}

void initQueue(struct queue *q)
{
    // fill in the code here
    q->count = 0;
    q->front = 0;
}

void enQueue(struct queue *q, int element)
{
    // fill in the code here
    int i;
    i = (q->count + q->front) % 5;
    if (i == q->front && q->count != 0)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->count++;
        q->contents[i] = element;
    }
}

int deQueue(struct queue *q)
{
    // fill in the code here
    int e;
    if (q->count == 0)
    {
        printf("Queue is empty\n");
        return (-1000);
    }
    e = q->contents[q->front];
    q->count--;
    q->front = (q->front + 1) % 5;
    return e;
}

void display(struct queue q)
{
    // fill in the code here
    int in, i;
    if (q.count == 0)
    {
        printf("{}");
    }
    else
    {
        for (in = q.front, i = 1; i <= q.count; i++, in++)
        {
            printf("%d ", q.contents[in % 5]);
        }
    }
}