/*
Linked List : Add after particular position



Write a C program to add details of students after particular position in the Linked List.



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
display() --- to display all the student details in the linked list.
addafter() --- to add a student's detail after particular position in the linked list
Assume: The index starts from 0.
*/
//                                                                      CODE
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
void addafter(struct student *, struct student, int);

int main()
{
    struct student *p;
    struct student s;
    int loc;
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
    do
    {
        printf("Enter the position after which you want to add another node\n");
        scanf("%d", &loc);
        printf("Enter the id\n");
        scanf("%d", &s.id);
        printf("Enter the name\n");
        scanf("%s", s.name);
        printf("Enter the gender\n");
        scanf("%s", s.gender);
        addafter(p, s, loc);
        printf("The details of the students are\n");
        printf("%4s %10s %6s\n", "ID", "Name", "Gender");
        display(p);
        printf("Do you want to add details of another student after a certain position? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    return 0;
}

void append(struct student **q, struct student s)
{
    // Fill in the code here
    struct student *nn, *temp;
    nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->link = NULL;
    if (*q == NULL)
    {
        *q = nn;
    }
    else
    {
        temp = *q;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = nn;
    }
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

void addafter(struct student *q, struct student s, int loc)
{
    // Fill in the code here
    struct student *nn, *temp = q;
    int index = 0;
    nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->link = NULL;
    while (index != loc)
    {
        temp = temp->link;
        index++;
        if (temp == NULL)
        {
            printf("There are less than %d students in the list\n", loc);
            break;
        }
    }
    if (temp != NULL)
    {
        nn->link = temp->link;
        temp->link = nn;
    }
}