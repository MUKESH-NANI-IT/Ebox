/*
Linked List : Delete at Beginning



Write a C program to delete the student's detail from the beginning of the Linked List.



Include functions

append() --- to add details of students to the end of the linked list.

delatbeg() --- to delete a student's detail from the beginning of the linked list. Print "The linked list is empty" if the list is empty. Return 0 if the list is empty, else 1.

display() --- to display all the student's details in the linked list.
*/
//                                      CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[10];
    char gender[10];
    struct student *link;
};
void append(struct student **, struct student);
void display(struct student *);
int delete (struct student **);

int main()
{
    struct student *p;
    struct student s;
    p = NULL;
    int c = 1;
    char ch[10];
    do
    {
        printf("Enter the id\n");
        scanf("%d", &s.id);
        printf("Enter the name\n");
        scanf("%s", s.name);
        printf("Enter the gender\n");
        scanf("%s", s.gender);
        s.link = NULL;
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %6s\n", "ID", "Name", "Gender");
    display(p);
    do
    {
        c = delete (&p);
        if (c == 0)
        {
            return 0;
        }
        printf("The details of the students after deleting a student are\n");
        printf("%4s %10s %6s\n", "ID", "Name", "Gender");
        display(p);
        printf("Do you want to delete details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    return 0;
}

void append(struct student **q, struct student s)
{
    // Fill in the code her
    struct student *nn = (struct student *)malloc(sizeof(struct student));
    struct student *temp = *q;
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->link = NULL;
    if (!(*q))
    {
        *q = nn;
        return;
    }
    while (temp->link)
        temp = temp->link;
    temp->link = nn;
}

void display(struct student *q)
{
    struct student *temp = q;
    while (temp != NULL)
    {
        printf("%4d ", temp->id);
        printf("%10s ", temp->name);
        printf("%6s ", temp->gender);
        printf("\n");
        temp = temp->link;
    }
}

int delete (struct student **q)
{
    // Fill in the code her
    struct student *temp = *q;
    if (!(*q))
    {
        printf("The linked list is empty");
        return 0;
    }
    else
    {
        *q = temp->link;
        return 1;
    }
}