/*

Parentheses Balance
You are given a string consisting of parentheses () and []. A string of this type is said to be correct:

(a) if it is the empty string
(b) if A and B are correct, AB is correct,
(c) if A is correct, (A) and [A] is correct.

Write a program that takes a sequence of strings of this type and check their correctness. Your program can assume that the maximum string length is 128.


Consider implementing a dynamically sized stack using an array.



Create a structure

struct stack {

    char *s;

    int top;

};



In the initstack function intialize the value of top to -1.

In the push function, push a character into the stack.
In the pop function, pop a character from the stack.

In the balancedornot function, display "Yes" if the parentheses balance otherwise display "No".

*/
//                                              CODE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stack
{
    char *s;
    int top;
};
void initstack(struct stack *p)
{
    p->top = -1;
    p->s = (char *)malloc(128 * sizeof(char));
}
void push(struct stack *p, char item)
{
    p->s[++(p->top)] = item;
}
char pop(struct stack *p)
{
    return p->s[(p->top)--];
}
void balancedornot(struct stack p, char *par)
{
    int i;
    initstack(&p);
    for (i = 0; i < strlen(par);
         i++)
    {
        if (par[i] == ')')
        {
            if (pop(&p) != '(')
            {
                printf("No\n");
                return;
            }
        }
        else if (par[i] == ']')
        {
            if (pop(&p) != '[')
            {
                printf("No\n");
                return;
            }
        }
        else
        {
            push(&p, par[i]);
        }
    }
    printf("%s\n", (p.top == -1) ? "Yes" : "No");
}
int main()
{
    int n;
    char s[100];
    scanf("%d", &n);
    struct stack st;
    while (n)
    {
        scanf("%s", s);
        balancedornot(st, s);
        n--;
    }
    return 0;
}