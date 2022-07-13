

import java.util.*;
import java.lang.*;
import java.io.*;


class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner sc=new Scanner(System.in);
		
		    int r=sc.nextInt();
		    int c=sc.nextInt();
		    char arr[][]=new char[r][c];
		    for(int i=0;i<r;i++){
		        String str=sc.next();
		        for(int j=0;j<c;j++){
		            arr[i][j]=str.charAt(j);
		        }
		    }
		    int x,y,m,z,i;
			x=sc.nextInt();
			y=sc.nextInt();
			m=sc.nextInt();
			char[] moves= new char[m];
			for(i=0;i<m;i++){
				moves[i]=sc.next().charAt(0);
			}
			int dir=0;
			int flag=0;
			int p,q;
			p=x;
			q=y;
			for(dir=0;dir<4;dir++)
			{
        		z=dir;
				flag=0;
				p=x;
				q=y;
    			for(i=0;i<m;i++)
				{
        			if(moves[i]=='F')
					{
            			if(dir==0)
						{
                			if(p==0 || arr[p-1][q]=='X')
							{
                    			flag=1;
                    			dir=z;
                    			break;
                			}
                			else
							{
                    			p=p-1;
                			}  
            			}
            			else if(dir==1)
						{
                			if(q==0 || arr[p][q-1]=='X')
							{
                    			flag=1;
                    			dir=z;
                    			break;
                			}
                			else
							{
                    			q=q-1;
                			}
            			}
            			else if(dir==2)
						{
                			if(p==(r-1) || arr[p+1][q]=='X')
							{
                    			flag=1;
                    			dir=z;
                    			break;
                			}
                			else
							{
                    			p=p+1;
                			}
            			}
            			else
						{
                			if(q==(c-1) || arr[p][q+1]=='X')
							{
                    			flag=1;
                    			dir=z;
                    			break;
                			}
                			else
							{
                    			q=q+1;
                			}
            			}
        			}
        			if(moves[i]=='R')
					{
            			if(dir==0)
						{
                			dir=3;
            			}
            			else
						{
                			dir=dir-1;
            			}
        			}
        			if(moves[i]=='L')
					{
            			if(dir==3)
						{
                			dir=0;
            			}
            			else
						{
                			dir=dir+1;
            			}
        			}
    			}
        		if(flag==0)
				{
            		System.out.println(p+" "+q);
					break;
        		}
        		dir=z;
		    }
	}
}
