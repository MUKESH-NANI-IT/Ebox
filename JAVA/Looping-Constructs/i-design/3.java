import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int A,B,N,G,i;
        A = sc.nextInt();
        B = sc.nextInt();
        N = sc.nextInt();
        for(i=0;i<N;i++)
        {
            if((i%2)==0)
            {
                A=A*2;
            }
            else
            {
                B=B*2;
            }
        }
        G=A+B;
        System.out.println(G);
}
}
