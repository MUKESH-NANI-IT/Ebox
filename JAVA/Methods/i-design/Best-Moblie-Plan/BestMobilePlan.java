public class BestMobilePlan{
    public static void printPlanDetails (int day,int eve,int nyt)
    {
    //type your code here
    double Aday,Aeve,Anyt,TA,TB;
    Aday=(day-100)*25;
    Aeve=15*eve;
    Anyt=20*nyt;
    double Bday,Beve,Bnyt;
    Bday=(day-250)*45;
    Beve=35*eve;    
    Bnyt=25*nyt;
    if(Aday<10)
    {
        Aday=0;
    }
    if(Bday<0)
    {
        Bday=0;
    }
    TA=(Aday+Aeve+Anyt)/100;
    TB=(Bday+Beve+Bnyt)/100;
    System.out.println("Plan A costs"+String.format("%.2f",TA));
    System.out.println("Plan B costs"+String.format("%.2f",TB));
    if(TA>TB)
    {
        System.out.println("Plan B is cheapest");
    }
    else if(TB>TA)
    {
        System.out.println("Plan A is cheapest");
    }   
    else
    {
        System.out.println("Plan A and B are the same price");
    }
    }
}
