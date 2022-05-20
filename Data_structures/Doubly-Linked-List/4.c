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
        s.prev = NULL;
        s.next = NULL;
        append(&p, s);
        printf("Do you want to add details of another student? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    printf("The details of the students are\n");
    printf("%4s %10s %7s\n", "ID", "Name", "Gender");
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
        printf("%4s%15s%7s\n", "ID", "Name", "Gender");
        display(p);
        printf("Do you want to add details of another student after a certain position? Type Yes/No\n");
        scanf("%s", ch);
    } while (!strcmp(ch, "Yes"));
    return 0;
}

void append(struct student **q, struct student s)
{
    struct student *nn = (struct student *)malloc(sizeof(struct student));
    nn->id = s.id;
    strcpy(nn->name, s.name);
    strcpy(nn->gender, s.gender);
    if ((*q) == NULL)
    {
        nn->next = NULL;
        nn->prev = NULL;
        (*q) = nn;
    }
    else
    {
        struct student *temp = (*q);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
        nn->prev = temp;
        nn->next = NULL;
    }

    int count(struct student * q)
    {
        int c = 0;
        struct student *temp = q;
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }

    void display(struct student * q)
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

    void addafter(struct student * q, struct student s, int loc)
    {
        // Fill in the code her
        int c = count(q);
        if (loc > c)
        {
            printf("There are less than %d students in the list\n", loc);
            return;
        }
        struct student *nn = (struct student *)malloc(sizeof(struct student));
        nn->id = s.id;
        strcpy(nn->name, s.name);
        strcpy(nn->gender, s.gender);
        int i = 0;
        struct student *temp = q, *p = NULL;
        while (temp != NULL && i <= loc)
        {
            p = temp;
            i++;
            temp = temp->next;
        }
        if (p->next != NULL)
        {
            nn->next = p->next;
            p->next->prev = nn;
            p->next = nn;
            nn->prev = p;
        }
        else
        {
            nn->next = p->next;
            p->next = nn;
            nn->prev = p;
        }
    }