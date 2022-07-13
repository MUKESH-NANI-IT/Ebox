import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        if(n>=15) {
            System.out.println("Adult Ticket");
        }
        else
        {
            System.out.println("Child Ticket");
        }
    }
}