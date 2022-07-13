import java.util.Scanner;
public class Main{
   public int Bob(int[] a, int n)
    {
        int i, j,k=2;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    k--;
                }
                if (k==0)
                {
                    break;
                }
                if(j==n-1) 
                {
                    a[i]=0;
                }
            }
             k=2;
        }
        k=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            {
                k=a[i];
            }
        }
        j=0;
        for(i=0; j<2; i++)
        {
            if(k==a[i])
            {
                a[i]=0;
                j++;
            }
        }
        return k;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n,i, k=2, l=0; 
        n = sc.nextInt();
        int a[] = new int[n];
        for(i=0;i<n;i++)
        {
            a[i] = sc.nextInt();
        }
        Main m = new Main();
        k = m.Bob(a, n);
        l=m.Bob(a, n);
        int ans=l*k;
        if (ans==0) 
        {
            System.out.println("-1");
        }
        else
        {
            System.out.println(ans);
        }   
    }
}