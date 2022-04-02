/*
Linked List : Search



Write a C program to find whether a student's detail is present in the Linked List.

Define a structure

struct student
{
  int id;
  char name[10];
  char gender[10];
  struct student * link;
}



Include functions

append() --- to add details of students to the end of the linked list.

search() --- to search for a student's detail in the linked list.The function returns 1 if the student is present and 0 otherwise.

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
int search(struct student *, struct student, char *);

int main()
{
    struct student *p;
    struct student s;
    p = NULL;
    char n[10];
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
    printf("Enter the name of the student to be searched\n");
    scanf("%s", n);
    if (search(p, s, n))
        printf("%s is present in the list\n", n);
    else
        printf("%s is not present in the list\n", n);
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
int search(struct student *q, struct student s, char *n)
{
    // Fill in the code her
    struct student *temp = q;
    if (q == NULL)
        return 0;
    while (temp != NULL)
    {
        if (strcmp(n, temp->name) == 0)
        {
            return 1;
        }
        else
        {
            temp = temp->link;
        }
    }
    return 0;
}