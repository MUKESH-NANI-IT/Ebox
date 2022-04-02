/*
Stack 2 : Array Implementation : Push and Pop

Consider implementing a dynamically sized stack using an array.

Create a structure

struct stack

{

int * a;

int top;

int maxSize;

};

The structure stack has a pointer 'a' to a dynamically allocated array (used to hold the contents of the stack), an integer 'maxSize' that holds the size of this array (i.e the maximum number of data that can be held in this array) and an integer 'top' which stores the array index of the top element in the stack.

Write a program to implement push and pop operation on stack and to display the contents of the stack.

In the initstack function intialize the value of top to -1 and initialize the value of maxSize.

Print the message “Stack is full” in the push function when an attempt is made to push a data into a full stack.

Print the message “Stack is empty” in the pop function and return the value -1000 when an attempt is made to pop data from an empty stack.

Refer function specifications for further details.
*/
//                                                                  CODE
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int *a;
    int top;
    int maxSize;
};
void initstack(struct stack *p, int maxSize);
void push(struct stack *p, int item);
void display(struct stack p);
int pop(struct stack *p);
void printMenu();

int main()
{
    struct stack p;
    int data, ch, data1, m;
    printf("Enter the maximum size of the stack\n");
    scanf("%d", &m);
    initstack(&p, m);
    do
    {
        printMenu();
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the element to be pushed\n");
            scanf("%d", &data);
            push(&p, data);
            break;
        case 2:
            data1 = pop(&p);
            if (data1 != -1000)
                printf("The popped element is %d\n", data1);
            break;
        case 3:
            printf("The contents of the stack are");
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
    printf("Choice 1 : Push\n");
    printf("Choice 2 : Pop\n");
    printf("Choice 3 : Display\n");
    printf("Any other choice : Exit\n");
}

void initstack(struct stack *p, int maxSize)
{
    p->a = (int *)malloc(maxSize * sizeof(int));
    p->top = -1;
    p->maxSize = maxSize;
}

void push(struct stack *p, int item)
{
    if (p->top == p->maxSize - 1)
    {
        printf("Stack is full\n");
        return;
    }
    p->top++;
    p->a[p->top] = item;
}

void display(struct stack p)
{
    int i;
    if (p.top == -1)
        printf(" {}");
    else
    {
        for (i = 0; i <= p.top; i++)
            printf(" %d", p.a[i]);
    }
}

int pop(struct stack *p)
{
    if (p->top == -1)
    {
        printf("Stack is empty\n");
        return -1000;
    }
    return p->a[p->top--];
}