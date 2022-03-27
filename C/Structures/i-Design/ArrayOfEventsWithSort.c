/*
Array of Events with Sorting
Silver Bells is an organization with creative and innovative ideas working towards making every Event, and unforgettable experience. Agnes, the founder of the Company wanted to develop an Event Management System that would let its Clients plan and host events seamlessly.

The Company has signed up a big time Event Management deal for the biggest "Handloom and Handicrafts Expo" from the Central Division of Handlooms & Handicraft to promote, market and sale products produced by weavers and artisans across the country. The Expo will showcase various kinds of events like fashion show, product exhibition, traditional dance shows using the handicrafts, etc., Agnes has appointed you to write a piece of code in the Event Management System that would help the company serve this biggest Event.

Write a program to create a structure named Date  with three members i.e, day (int),  month (String), year(int). Create another structure named Event with five members i.e, name(String), type(String), duration(int in days), expenses (in lakhs, float)), scheduledDate (date). Below are the Date and Event structure:

struct Date
{
int day;
string month;
int year;
};

struct Event
{
string name;
string type;
int duration;
float expenses;
struct Date scheduledDate;
};

In the main method, create an array of Events for the structure Event and get the details of all events and display the events sorted in ascending order based on scheduled date.
*/
//                                                                      CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
    int day;
    char month[10];
    int year;
};
struct Event
{
    char name[30];
    char type[30];
    int duration;
    float expenses;
    struct Date scheduledDate;
};
int monthcalc(char *s)
{
    if (strcmp(s, "January") == 0)
        return 1;
    else if (strcmp(s, "Feburary") == 0)
        return 2;
    else if (strcmp(s, "March") == 0)
        return 3;
    else if (strcmp(s, "April") == 0)
        return 4;
    else if (strcmp(s, "May") == 0)
        return 5;
    else if (strcmp(s, "June") == 0)
        return 6;
    else if (strcmp(s, "July") == 0)
        return 7;
    else if (strcmp(s, "August") == 0)
        return 8;
    else if (strcmp(s, "September") == 0)
        return 9;
    else if (strcmp(s, "October") == 0)
        return 10;
    else if (strcmp(s, "November") == 0)
        return 11;
    else
        return 12;
}
int main()
{
    int i, j, n;
    printf("Enter the number of events\n");
    scanf("%d", &n);
    struct Event e[n];
    struct Event temp;
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the event %d\n", i + 1);
        scanf("\n%[^\n]", e[i].name);
        printf("Enter the type of the event %d\n", i + 1);
        scanf("%s", e[i].type);
        printf("Enter the duration (in days) of the event %d\n", i + 1);
        scanf("%d", &e[i].duration);
        printf("Enter the projected expenses (in lakhs) for the event %d\n", i + 1);
        scanf("%f", &e[i].expenses);
        printf("Enter the day of the event %d\n", i + 1);
        scanf("%d", &e[i].scheduledDate.day);
        printf("Enter the month of the event %d\n", i + 1);
        scanf("%s", e[i].scheduledDate.month);
        printf("Enter the year of the event %d\n", i + 1);
        scanf("%d", &e[i].scheduledDate.year);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (e[j].scheduledDate.year > e[j + 1].scheduledDate.year)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
            else if ((e[j].scheduledDate.year == e[j + 1].scheduledDate.year) && (monthcalc(e[j].scheduledDate.month) > monthcalc(e[j + 1].scheduledDate.month)))
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
            else if ((e[j].scheduledDate.year == e[j + 1].scheduledDate.year) && (monthcalc(e[j].scheduledDate.month) == monthcalc(e[j + 1].scheduledDate.month)) && (e[j].scheduledDate.day > e[j + 1].scheduledDate.day))
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("Event details sorted by scheduled date\n");
    for (i = 0; i < n; i++)
    {
        printf("Event Name : %s\n", e[i].name);
        printf("Event Type : %s\n", e[i].type);
        printf("Event Duration : %d\n", e[i].duration);
        printf("Projected Expense : %.1fL\n", e[i].expenses);
        printf("Event Date : %d %s %d\n", e[i].scheduledDate.day, e[i].scheduledDate.month, e[i].scheduledDate.year);
    }
    return 0;
}