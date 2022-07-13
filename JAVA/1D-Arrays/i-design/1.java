import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n,i,sum=0;
        n = sc.nextInt();
        int a[] = new int[n];
        for(i=0;i<n;i++)
        {
            a[i] = sc.nextInt();
        }
        for(i=0;i<n;i+=2)
        {
            if(a[i]<a[i+1])
            {
                sum+=a[i];
            }
            else
            {
                sum+=a[i+1];
            }
        }
        System.out.println(sum);
    }
}
