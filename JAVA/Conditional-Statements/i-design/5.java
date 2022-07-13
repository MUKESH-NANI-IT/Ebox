import java.util.*;
class Main
{
    public static void main(String args[])
    {
        int a,b,c;
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        if(a>b) {
            c=a+b;
            System.out.println(a+" "+c);
        }
        else 
        {
            c=a+b;
            System.out.println(b+" "+c);
        }
    }
}