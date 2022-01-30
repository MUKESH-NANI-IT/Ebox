/*Tickets sold for Charity Event
 
HelpIndia, a famous NGO has been selective in identifying events to raise funds for charity. Suzanne is a volunteer from the NGO who was selling tickets to the public for the charity event. She sold 'X' more adult tickets than children tickets and she sold twice as many senior tickets as children tickets. Assume that an adult ticket costs $5, children ticket costs $2 and senior ticket costs $3.
Suzanne made 'Y' dollars from ticket sales. Find the number of adult tickets, children tickets, and senior tickets sold.
*/
    



    #include<stdio.h>
    int main()
    {
        int x,y;
        int ct,at,st;
        printf("Enter the value of x\n");
        scanf("%d",&x);
        printf("Enter the value of y\n");
        scanf("%d",&y);
        ct=(y-(5*x))/13;
        at=x+ct;
        st=2*ct;
        printf("Number of children tickets sold : %d\n",ct);
        printf("Number of adult tickets sold : %d\n",at);
        printf("Number of senior tickets sold :  %d\n",st);
        
    }