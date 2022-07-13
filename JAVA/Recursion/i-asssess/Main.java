import java.util.*;
class Main
{
    public static int triangle(int n)
    {
        if(n == 0)
            return 0;
        else
            return n + triangle(n-1);
    }
    public static void main(String args[])
    {
        //type your code here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of triangles");
        int n = sc.nextInt();
        int result = triangle(n);
        System.out.println("Total number of blocks : "+result);

    }
}