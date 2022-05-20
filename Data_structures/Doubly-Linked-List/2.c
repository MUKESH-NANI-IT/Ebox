#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int id;
    char name[10];
    char gender[10];
    struct student *prev;
    struct student *next;
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
        s.prev = NULL;
        s.next = NULL;
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %7s\n", "ID", "Name", "Gender");
    display(p);
    printf("The number of students in the list is %d\n", count(p));
    return 0;
}

void append(struct student **q, struct student s)
{
    struct student *temp = *q, *nn;
    nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    nn->next = NULL;

    if (!(*q))
    {
        nn->prev = NULL;
        *q = nn;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = nn;
    temp->prev = NULL;
}

void display(struct student *q)
{
    struct student *temp = q;
    while (temp != NULL)
    {
        printf("%4d ", temp->id);
        printf("%10s ", temp->name);
        printf("%7s ", temp->gender);
        printf("\n");
        temp = temp->next;
    }
}

int count(struct student *q)
{
    struct student *temp = q;
    int c = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c++;
}