//Event Details
 
//Be it a last minute get together, a birthday party or corporate events, the "Pine Tree" Event Management Company helps you plan and execute it better and faster. Nikhil, the founder of the company wanted the Amphi Event Management System to get and display the event details from his Customers for every new order of the Company.
 
//Write a program that will get the input of the event details like name of the event, type of the event, number of people expected, a string value (Y/N) telling whether the event is going to be a paid entry and the projected expenses (in lakhs) for the event. The program should then display the input values as a formatted output.
 
/*Input Format:
First input is a string that corresponds to the name of the event. Assume the maximum length of the string as 50.
Second input is a string that corresponds to the type of the event. Assume the maximum length of the string as 50.
Third input is an integer that corresponds to the number of people expected for the event.
Fourth input is a character that corresponds to Y/N telling whether the event is going to be a paid entry or not.
Fifth input is a double value that corresponds to the projected expenses (in lakhs) for the event.*/



#include<stdio.h>
int main()
{
    char eventname[50];
    char type[50];
    int people;
    char paid[40];
    float b;
    printf("Enter the name of the event\n");
    fgets(eventname,sizeof(eventname),stdin);
    printf("Enter the type of the event\n");
    fgets(type,sizeof(type),stdin);
    printf("Enter the number of people expected\n");
    scanf("%d",&people);
    printf("Is it a paid entry? (Type Y or N)\n");
    scanf("%s",&paid);
    printf("Enter the projected expenses (in lakhs) for this event\n");
    scanf("%f",&b);
    printf("Event name:");
    puts(eventname);
    printf("Event type:");
    puts(type);
    printf("Expected Count:%d\n",people);
    printf("paid Entry:%s\n",paid);
    printf("Projected Expenses:%0.1lfL",b);

}