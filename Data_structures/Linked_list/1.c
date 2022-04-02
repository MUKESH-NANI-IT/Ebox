/*
Linked List :Append



Write a C program to add details of students to the end of the linked list.

Define a structure
struct student
{
  int id;
  char name[10];
  char gender[10];
  struct student * link;
};


Include functions

append() --- to add details of students to the end of the linked list.
display() --- to display all the student's details in the linked list.
*/
//                                              CODE
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

int main()
{
    struct student *p;
    struct student s;
    p = NULL;
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
    return 0;
}
int find(struct student *q, struct student s)
{
    while (q)
    {
        if (s.id == q->id)
        {
            return 1;
        }
        q = q->link;
    }
    return 0;
}

void append(struct student **q, struct student s)
{
    if (find(*q, s))
    {
        return;
    }
    struct student *nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->link = NULL;
    if (!(*q))
    {
        *q = nn;
        return;
    }
    nn->link = *q;
    *q = nn;
}

void display(struct student *q)
{
    struct student *temp = q;
    if (temp != NULL)
    {
        display(temp->link);
        printf("%4d", temp->id);
        printf("%10s", temp->name);
        printf("%7s", temp->gender);
        printf("\n");
    }
}