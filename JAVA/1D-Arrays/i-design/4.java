import java.util.Scanner;
class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        int res=0;
        for (int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
            res=res^arr[i];
        }

        System.out.println(res);
    }
}