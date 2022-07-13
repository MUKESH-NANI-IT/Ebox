import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int aCount=0,bCount=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='a')
            aCount++;
            else if(s.charAt(i)=='b')
            bCount++;
        }
        if(aCount<=bCount)
        System.out.println(aCount);
        else
        System.out.println(bCount);
    }
}