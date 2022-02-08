// Total Expenses for the Event

/*The prime functionality of an Event Management System is budgeting. An Event Management System should estimate the total expenses incurred by an event and the percentage rate of each of the expenses involved in planning and executing an event. Nikhil, the founder of "Pine Tree" wanted to include this functionality in his company’s Amphi Event Management System and requested your help in writing a program for the same.

The program should get the branding expenses, travel expenses, food expenses and logistics expenses as input from the user and calculate the total expenses for an event and the percentage rate of each of these expenses.
 */
/*                                                              CODE                                                        */

#include <stdio.h>
int main()
{
    int br, tr, fe, le;
    float Total, brp, trp, fop, lop;
    printf("Enter branding expenses\n");
    scanf("%d", &br);
    printf("Enter travel expenses\n");
    scanf("%d", &tr);
    printf("Enter food expenses\n");
    scanf("%d", &fe);
    printf("Enter logistics expenses\n");
    scanf("%d", &le);
    Total = br + tr + fe + le;
    printf("Total expenses :Rs.%0.2f\n", Total);
    brp = (((float)br / Total) * 100);
    printf("Branding expenses percentage :  %0.2f%%\n", brp);
    trp = (((float)tr / Total) * 100);
    printf("Travel expenses percentage : %0.2f%%\n", trp);
    fop = (((float)fe / Total) * 100);
    printf("Food expenses percentage : %0.2f%%\n", fop);
    lop = (((float)le / Total) * 100);
    printf("Logistics expenses percentage : %0.2f%%\n", lop);
}
