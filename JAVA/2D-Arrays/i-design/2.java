import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        int N,i,j,flag=0;
        
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        int[][] a=new int[100][100];
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
     for(i=1;i<=N+1;i++)
    {
        for(j=1;j<=N+1;j++)
        {
            if(a[i][j]<=10 && a[i][j]>0 && a[i+1][j+1]<=10 && a[i][j+1]>0 && a[i][j]!=-1 && a[i][j+1]!=-1 && i!=N-1 && j!=N-1)
            {
              if(a[i+1][j]!=0 || a[i][j+1]!=0)
                flag=1;
            }
            if(a[i][j]<=10 && a[i][j]>0 && a[i+1][j-1]<=10 && a[i+1][j-1]>0 && a[i][j]!=-1 && a[i+1][j-1]!=-1 && i!=N-1 && j!=0)
            {
                if(a[i][j-1]!=0 || a[i+1][j]!=0)
                flag=1;
            }
            if(a[i][j]<=10 && a[i][j]>0 && a[i-1][j-1]<=10 && a[i-1][j-1]>0 && a[i][j]!=-1 && a[i-1][j-1]!=-1 && i!=0 && j!=0)
            {
                if(a[i][j-1]!=0 || a[i-1][j]!=0)
                flag=1;
            }
            if(a[i][j]<=10 && a[i][j]>0 && a[i-1][j+1]<=10 && a[i-1][j+1]>0 && a[i][j]!=-1 && a[i-1][j+1]!=-1 && i!=0 && j!=N-1)
            {
              if(a[i][j+1]!=0 || a[i-1][j]!=0)
              flag=1;
            }
            if(a[i][j]<10 && a[i][j+2]<10 && a[i][j]>0 && a[i][j+2]>0  && j!=N-1 && j!=N-2)
            {
               if(a[i][j+1]!=0)
               flag=1;
            }
            if(a[i][j]<=10 && a[i+2][j]<=10 && a[i][j]>0 && a[i+2][j]>0  && i!=N-1 && i!=N-2)
            {
           if(a[i+1][j]!=0)
            flag=1;
            }
            if(a[i][j]==1)
            {
             if(a[i][j+1]!=0 && a[i][j-1]!=0 && a[i+1][j]!=0 && a[i-1][j]!=0)
             flag=1;
            }
        }
    }
    if(flag==0)
    {
        System.out.println("Yes");
    }
    if(flag==1)
    {
        System.out.println("No");
    }
    }
}