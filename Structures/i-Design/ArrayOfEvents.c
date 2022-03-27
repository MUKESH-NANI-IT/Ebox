/*
Array of Events
Silver Bells is an organization with creative and innovative ideas working towards making every Event, and unforgettable experience. Agnes, the founder of the Company wanted to develop an Event Management System that would let its Clients plan and host events seamlessly.

The Company has signed up a big time Event Management deal for the biggest "Handloom and Handicrafts Expo" from the Central Division of Handlooms & Handicraft to promote, market and sale products produced by weavers and artisans across the country. The Expo will showcase various kinds of events like fashion show, product exhibition, traditional dance shows using the handicrafts, etc., Agnes has appointed you to write a piece of code in the Event Management System that would help the company serve this biggest Event.

Hence create a structure named Event with four members i.e, name(String), type(String), duration(int in days) and expenses (in lakhs, float). Below is the Event structure:

struct Event
{
string name;
string type;
int duration;
float expenses;
};

Write a program that will create an array of Events for the above structure Event. The program should contain a menu-driven main method with the following menus:
1) Display all Events
2) Search for an Event by name
3) List all events of a particular type
4) Display the details of the most expensive event
*/
//                                          CODE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Event
{
    char name[100];
    char type[100];
    int duration;
    float expenses;
};
int main()
{
    int n, i, choice;
    float max = 0;
    char YesNo[100];
    char ch[100];
    printf("Enter the number of events\n");
    scanf("%d", &n);
    struct Event obj[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the event %d\n", i + 1);
        scanf(" %[^\n]s", obj[i].name);
        printf("Enter the type of the event %d\n", i + 1);
        scanf(" %s", obj[i].type);
        printf("Enter the duration (in days) of the event %d\n", i + 1);
        scanf("%d", &obj[i].duration);
        printf("Enter the projected expenses (in lakhs) for the event %d\n", i + 1);
        scanf("%f", &obj[i].expenses);
    }
    do
    {
        printf("Menu:\n");
        printf("1) Display all Events\n");
        printf("2) Search for an Event by name\n");
        printf("3) List all events of a particular type\n");
        printf("4) Display the details of the most expensive event\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            for (i = 0; i < n; i++)
            {
                printf("Event %d Details\n", i + 1);
                printf("Event Name: %s\n", obj[i].name);
                printf("Event Type: %s\n", obj[i].type);
                printf("Event Duration: %d\n", obj[i].duration);
                printf("Projected Expense: %.1fL\n", obj[i].expenses);
            }
        }
        break;
        case 2:
        {
            int flag = 0;
            int x = 0;
            printf("Enter the name of the event to be searched\n");
            scanf(" %[^\n]s", ch);
            for (i = 0; i < n; i++)
            {
                if (!strcmp(ch, obj[i].name))
                {
                    flag = 1;
                    x = i;
                }
            }
            if (flag == 1)
                printf("%s Event Found\n", obj[x].name);
            else
                printf("No such Event \n");
        }
        break;
        case 3:
        {
            char typech[50];
            int flag = 0;
            printf("Enter the type of the event to be listed\n");
            scanf(" %s", typech);
            for (i = 0; i < n; i++)
            {
                if (!strcmp(typech, obj[i].type))
                {
                    flag = 1;
                    printf("%s\n", obj[i].name);
                }
            }
            if (flag == 0)
                printf("No such type of Event\n");
        }
        break;
        case 4:
        {
            for (i = 0; i < n; i++)
            {
                if (obj[i].expenses > max)
                {
                    max = obj[i].expenses;
                }
            }
            for (i = 0; i < n; i++)
            {
                if (max == obj[i].expenses)
                {
                    printf("Event Name: %s\n", obj[i].name);
                    printf("Event Type: %s\n", obj[i].type);
                    printf("Event Duration: %d\n", obj[i].duration);
                    printf("Projected Expense : %.1fL\n", obj[i].expenses);
                }
            }
        }
        break;
        }
        printf("Do you want to continue? Type [Yes / No]\n");
        scanf("%s", YesNo);
    } while (strcmp(YesNo, "No"));
    return 0;
}