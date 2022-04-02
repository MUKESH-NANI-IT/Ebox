/*
Stack as a Linked List

 Write a menu driven program to implement stack as a linked list. Assume that the size of the stack is 5.



Define a structure


struct node {
    int data ;
    struct node * link ;
} ;




Include functions:

push --- to push an element into the stack.

pop --- to pop an element from the stack. If the stack is empty, print No element in the stack

display --- to display the elements in the stack

count --- to count the number of elements in the stack
*/
//                                                                          CODE
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void push(struct node **s, int n)
{
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = n;
    nn->link = *s;
    *s = nn;
}
void display(struct node *s)
{
    while (s)
    {
        printf("%d ", s->data);
        s = s->link;
    }
    printf("\n");
}
int count(struct node *s)
{
    int count_ = 0;
    while (s)
    {
        count_++;
        s = s->link;
    }
    return count_;
}
void pop(struct node **s)
{
    if (!(*s))
    {
        printf("No element in the stack\n");
        return;
    }
    printf("Element Popped is %d\n", (*s)->data);
    *s = (*s)->link;
}
int main()
{
    int choice, n;
    struct node *s = NULL;
    printf("Choice 1 : To push data\nChoice 2 : To pop data\nChoice 3 : To display\nChoice 4 : To count\n\n");
    do
    {
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be pushed\n");
            scanf("%d", &n);
            push(&s, n);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            printf("Linked List Contents\n");
            display(s);
            break;
        case 4:
            n = count(s);
            printf("Number of elements in the linked list is %d\n", n);
            break;
        }
    } while (choice < 5 && choice > 0);
    printf("END");
    return 0;
}