import java.util.Scanner;
public class Main
{
    public static void main(String [] args)
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int count=0;
        if(s.length()<3)
        System.out.println("No");
        
        if(s.charAt(0)==s.charAt(1))
        System.out.println("No");
        else
        {
        for(int i=0;i<s.length()-2;i++)
        {
            
                if(s.charAt(i)==s.charAt(i+2))
                {
                    count++;
                }
            
        }
        if(count==s.length()-2)
        System.out.println("Yes");
        else
        System.out.println("No");
        }
    }
}