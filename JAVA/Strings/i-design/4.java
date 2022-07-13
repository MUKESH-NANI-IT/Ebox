import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        String name;
        int i,j,k=0,val=0,c=1;
        int[] count;
        count=new int[50];
        Scanner sc=new Scanner(System.in);
        name=sc.nextLine();
        char[] a=name.toCharArray();
        for(i=0;i<name.length();i++)
        {
            c=1;
            for(j=i+1;j<name.length();j++)
            {
                if(name.charAt(i)==name.charAt(j) &&a[j]!='#')
                {
                    a[j]='#';
                    count[k]=c+1;
                    k++;
                    c++;
                }
            }
        }
        int max=count[0];
        for(i=1;i<k;i++)
        {
            if(max<count[i])
            {
                max=count[i];
            }
        }
        val=max+max;
        if(val==name.length())
        System.out.println("Yes");
        else
        System.out.println("No");
    }
}