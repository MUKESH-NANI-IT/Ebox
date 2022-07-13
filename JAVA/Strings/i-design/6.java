import java.util.*;
import java.lang.*;
import java.io.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner sc=new Scanner(System.in);
		
			int c=0;
			int n=sc.nextInt();
			String s[]=new String[n];
		    for(int i=0;i<n;i++)
			{
				s[i]=sc.next();
			}
			for(int i=0;i<n;i++)
			{
				if(c==1 && s[i].equals("cookie"))
					break;
				else if(c==1)
					c=0;
				else if(c==0 && s[i].equals("cookie"))
					c=1;
			}
			if(c==0)
				System.out.println("YES");
			else
				System.out.println("NO");
		
	}
}
