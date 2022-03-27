/*
Enrolling the Events
Be it a concert, conference, corporate event or weddings, people have started to take interest in all kinds of events equally and actively. Silver Bells is an organization with creative and innovative ideas working towards making every Event, an unforgettable experience. Agnes, the founder of the Company wanted to develop an Event Management System that would let its Clients plan and host events seamlessly.

The primary requirement of the Event management System would be to enroll the details of any Event as given by the Clients. Agnes has assigned you the responsibility to write a program that will create a structure named Event with four members i.e, name(String), type(String), duration(int in days) and expenses (in lakhs, float). Below is the Event structure:

struct Event
{
char name[50];
char type[50];
int duration;
float expenses;
};

Your program should get the details of an Event and display the same in the main method. Can you accomplish the responsibility by following the requirements given?
*/
//                                                  CODE
#include <stdio.h>
struct Event
{
    char name[50];
    char type[50];
    int duration;
    float expenses;
};
int main()
{
    struct Event E;
    printf("Enter the name of the event\n");
    scanf("%[^\n]", E.name);
    printf("Enter the type of the event\n");
    scanf("%s", E.type);
    printf("Enter the duration (in days) of this event\n");
    scanf("%d", &E.duration);
    printf("Enter the projected expenses (in lakhs) for the event\n");
    scanf("%f", &E.expenses);
    printf("Event Name : %s\n", E.name);
    printf("Event Type : %s\n", E.type);
    printf("Event Duration : %d\n", E.duration);
    printf("Projected Expense : %.1fL\n", E.expenses);
    return 0;
}