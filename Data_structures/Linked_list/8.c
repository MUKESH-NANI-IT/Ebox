/*
Linked List : Delete any Student



Write a C program to delete the details of a student by name in the Linked List.



Include functions

append() --- to add details of students to the end of the linked list.

delete() --- to delete the details of a student by name in the linked list. Return 0 if the linked list is empty, else return 1. Print "The linked list is empty" if the list is empty. Print "Student studentName not found" if the student is not present in the list.

display() --- to display all the student's details in the linked list.
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
int delete (struct student **, struct student, char *);

int main()
{
    struct student *p;
    p = NULL;
    int c = 1;
    struct student s;
    char ch[10];
    char n[10];
    do
    {
        printf("Enter the id\n");
        scanf("%d", &s.id);
        printf("Enter the name\n");
        scanf("%s", s.name);
        printf("Enter the gender\n");
        scanf("%s", s.gender);
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %6s\n", "ID", "Name", "Gender");
    display(p);
    do
    {
        printf("Enter the name of student to be deleted\n");
        scanf("%s", n);
        c = delete (&p, s, n);
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

int delete (struct student **q, struct student s, char *n)
{
    struct student *temp = *q, *prev;
    prev = NULL;
    if (!(*q))
    {
        printf("The linked list is empty");
        return 0;
    }
    if (temp != NULL && !strcmp(temp->name, n))
    {
        *q = temp->link;
        return 1;
    }
    else
    {
        while (temp != NULL && strcmp(temp->name, n))
        {
            prev = temp;
            temp = temp->link;
        }
        if (temp == NULL)
        {
            printf("Student %s not found", n);
            return 1;
        }
        prev->link = temp->link;
        return 1;
    }
    return 0;
}