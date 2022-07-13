import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int inp,loop=1,n=2,count=0,i;
        inp = sc.nextInt();
        while(loop<=inp)
        {
            for(i=2;i<=n/2;i++)
            {
               if(n%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                System.out.println(n+" ");
                loop++;
            }
            n++;
            count=0;
        }
    }
}