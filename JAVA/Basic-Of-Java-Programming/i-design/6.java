import java.util.*;
class Main
{
    public static void main(String args[])
    {
        int N,o,t,te,f,ff,h,sum;
        Scanner sc = new Scanner(System.in);
        N=sc.nextInt();
        h=N/100;
        N%=100;
        ff=N/50;
        N%=50;
        te=N/10;
        N%=10;
        f=N/5;
        N%=5;
        t=N/2;
        N%=2;
        o=N/1;
        N%=1;
        sum=o+t+f+te+ff+h;
        System.out.println(sum);
    }

}