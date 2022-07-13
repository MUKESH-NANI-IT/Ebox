import java.util.*;
import java.lang.*;
import java.io.*;
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    char s[][]=new char[n][m];
		    for(int i=0;i<n;i++){
		        String str=sc.next();
		        for(int j=0;j<m;j++){
		            s[i][j]=str.charAt(j);
		        }
		    }
		    int total=0;
		    for(int j=0;j<m;j++){
		        int n1=0;
		        for(int i=0;i<n;i++){
		            if(s[i][j]=='1') n1++;
		        }
		        n1--;
		        total+=(n1*(n1+1))/2;
		    }
		    System.out.println(total);
            
            
		
	}
}