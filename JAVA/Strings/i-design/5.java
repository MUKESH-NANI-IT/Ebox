

import java.util.*;
import java.lang.*;
import java.io.*;


class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	        int n=sc.nextInt();
	        int k=sc.nextInt();
	        String ar[]=new String[n];
	        for(int x=0;x<n;x++)
	        {
	            ar[x]=sc.next();
	        }
	        boolean b[]=new boolean[n];
	        for(int x=0;x<k;x++)
	        {
	            int a=sc.nextInt();
	            String ar2[]=new String[a];
	            for(int y=0;y<a;y++)
    	        {
    	            ar2[y]=sc.next();
    	        }
    	        for(int z=0;z<n;z++)
    	        {
    	            String s1=ar[z];
    	            for(int y=0;y<a;y++)
    	            {
    	                if(s1.equals(ar2[y]))
    	                {
    	                    b[z]=true;
    	                    break;
    	                }
    	            }
    	        }
	        }
	        for(int x=0;x<n;x++)
	        {
	            if(b[x])
	            System.out.print("Yes ");
	            else
	            System.out.print("No ");
	        }
	        System.out.println();
        
	}
}
