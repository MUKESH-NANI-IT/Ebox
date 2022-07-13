import java.io.*;
import java.util.*;
class Main 
{
    public static void main(String [] args) 
    {
        int i,n,sum=0,count=0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        if(n<0) 
        {
            System.out.println("Invalid Input");
        }
        else 
        {
            int a[] = new int[n];
            for(i=0;i<n;i++) 
            {
                a[i] = sc.nextInt();
                if(a[i] <0) 
                {
                    System.out.println("Invalid Input");
                    break;
                }
                else
                {
                    count++;
                    sum = sum+a[i];
                }
            }
            if(count == n)
            {
                for(i=0;i<n;i++) 
                {
                    System.out.print(a[i]+" ");
                }
                System.out.println();
                System.out.println(sum);
            }
        }
    }
}