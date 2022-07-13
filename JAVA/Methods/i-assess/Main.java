import java.util.*;
public class Main{
    public static int calculate(int x, int n)
{
    int result = 0;
    if (n == 0)
    {
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        result += power(x, i);
    }
    return result;
}
    public static int power(int x, int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return x * power(x, n - 1);
        }
    }
    public static void main(String args[]){
        //get inputs
        Scanner sc=new Scanner(System.in);
        int x,n;
        System.out.println("Enter the value of x");
        x=sc.nextInt();
        System.out.println("Enter the value of n");
        n=sc.nextInt();
        //call function
        int result=calculate(x,n);
        //print result
        System.out.println("The result is \n"+result);

    }
}