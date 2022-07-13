import java.util.*;
public class Main{
    public static void main(String args[]){
        //get inputs
        Scanner sc=new Scanner(System.in);
        int day=sc.nextInt();
        int eve=sc.nextInt();
        int nyt=sc.nextInt();

        BestMobilePlan.printPlanDetails(day,eve,nyt);
    }
}