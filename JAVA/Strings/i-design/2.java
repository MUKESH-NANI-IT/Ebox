import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        String name1,name2;
        int count=0,countq=0,i;
        Scanner sc=new Scanner(System.in);
        name1=sc.next();
        name2=sc.next();
        if(name1.length()==name2.length())
        {
            for(i=0;i<name1.length();i++)
            {
                if((name1.charAt(i)!='?'&&(name2.charAt(i)!='?')&&(name1.charAt(i)!=name2.charAt(i))))
                {
                    count++;
                }
            }
        
        for(i=0;i<name1.length();i++)
        {
            if((name1.charAt(i)=='?') || (name2.charAt(i)=='?'))
            {
                countq++;
            }
        }
        }
        countq=count+countq;
        System.out.println(count+" "+countq);
    }
}