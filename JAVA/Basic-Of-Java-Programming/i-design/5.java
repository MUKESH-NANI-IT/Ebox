import java.util.*;
import java.io.*;
class Main{
    public static void main(String args[])
    {
        int x,y;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of X");
        x=sc.nextInt();
        System.out.println("Enter the value of Y");
        y=sc.nextInt();
        int a,b,s;
        b=(y-(5*x))/13;
        a=x+b;
        s=2*b;
        System.out.println("Number of children tickets sold : "+b);
        System.out.println("Number of adult tickets sold : "+a);
        System.out.println("Number of senior tickets sold : "+s);
    }
}