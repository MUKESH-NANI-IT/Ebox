import java.util.Scanner;
import java.lang.Math.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,s,a,g;
        int i[]=new int[10];
        n=sc.nextInt();

        if(n/10==0)
        System.out.println("Invalid Input");
        else
        {
        for(a=0;n!=0;a++)
        {
        s=n%10;
   
        n=n/10;

        i[a]=s;
        }
        int r=i[0]-i[a-1];
        g=Math.abs(r);
        System.out.println(g);
        }
    }
}