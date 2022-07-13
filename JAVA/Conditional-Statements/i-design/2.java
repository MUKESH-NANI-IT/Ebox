import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        Integer age=sc.nextInt();
        if(age<15||age>60)
        {
            System.out.println("Not allowed");
        }
        else
        {
            System.out.println("Allowed");
        }
    }
}