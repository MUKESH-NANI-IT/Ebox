import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n,i,j,flag=0;
        n=sc.nextInt();
        int[][] a=new int[50][50];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]<=10 && a[i][j]>0)
            {
                if(a[i][j-1]==0 && a[i][j+1]==0 && a[i-1][j]==0 && a[i+1][j]==20)
                {
                    flag=1;
                    System.out.println(i+" "+j);
                }
                if(a[i][j-1]==0 && a[i][j+1]==0 && a[i-1][j]==20 && a[i+1][j]==0)
                {
                    flag=1;
                    System.out.println(i+" "+j);
                }
                if(a[i][j-1]==0 && a[i][j+1]==20 && a[i-1][j]==0 && a[i+1][j]==0)
                {
                    flag=1;
                    System.out.println(i+" "+j);
                }
                if(a[i][j-1]==20 && a[i][j+1]==0 && a[i-1][j]==0 && a[i+1][j]==0)
                {
                    flag=1;
                    System.out.println(i+" "+j);
                }
            }
        }
    }
        if(flag==0)
        {
            System.out.println(-1);
        }
    }
}