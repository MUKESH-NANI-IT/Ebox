import java.util.Scanner;
class main()
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a,b,c,d,e;
        float avg;
        a=sc.next();
        b=sc.next();
        c=sc.next();
        d=sc.next();
        e=sc.next();
        avg=(float)(a+b+c+d+e)/5;
        if (a > 2 && b > 2 && c > 2 && d > 2 && e > 2)
    {
        if ((a == 5) || (b == 5) || (c == 5) || (d == 5) || (e == 5))
        {
            if (avg >= 4.0)
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("No");
            }
        }
        else
        {
            System.out.println("No");
        }
    }
    else
    {
        System.out.println("No");
    }
    }
}