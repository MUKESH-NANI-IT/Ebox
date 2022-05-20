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

void addatbeg(struct student **, struct student);
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
        s.prev = NULL;
        s.next = NULL;
        addatbeg(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %7s\n", "ID", "Name", "Gender");
    display(p);
    return 0;
}

void addatbeg(struct student **q, struct student s)
{
    struct student *nn, *temp = *q;
    nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);

    if (!(*q))
    {
        nn->prev = NULL;
        *q = nn;
        return;
    }
    *q = nn;
    nn->next = temp;
    nn->prev = NULL;
    temp->prev = nn;
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