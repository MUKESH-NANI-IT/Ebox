/*
Linked List :Count



Write a C program to count the number of students in the linked list.

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
count() --- to count number of students in the linked list
*/
//                                                  CODE
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
int count(struct student *);

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
    printf("The number of students in the list is %d\n", count(p));
    return 0;
}

void append(struct student **q, struct student s)
{
    // Fill in the code here
    struct student *temp = *q, *nn = (struct student *)malloc(sizeof(struct student));
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

int count(struct student *q)
{
    // Fill in the code here
    struct student *temp = q;
    int c = 0;
    while (temp != NULL)
    {
        c = c + 1;
        temp = temp->link;
    }
    return c;
}