

import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{

		Scanner sc=new Scanner(System.in);
		int t=1;
		while(t>0){
		    
		    int []a = new int[3];
		    for(int i=0;i<3;i++)
        {
		        a[i]=sc.nextInt();
		    }
		     
		    int []b = new int[a[1]];
		    for(int i=0;i<a[1];i++)
        {
		        b[i]=sc.nextInt();
		    }
		     
		    int []c = new int[a[2]];
		    for(int i=0;i<a[2];i++)
        {
		        c[i]=sc.nextInt();
		    }
		    
		    
		    int c1=0;
		    int c2=0;
		  
		  for(int i=0;i<a[1];i++)
      {
		      for(int j=0;j<a[2];j++)
          {
		         if(b[i]==c[j])
             {
		             c1++;
		         } 
		      }
		  }
		    c2=a[0]-((a[1]+a[2])-c1);
		    System.out.println(c1+" "+c2);
		  
		    t--;
		}
	}
}
