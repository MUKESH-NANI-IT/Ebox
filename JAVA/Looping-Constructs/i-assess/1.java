import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k,N,i, result=0;
        k = sc.nextInt();
        N = sc.nextInt();
        for(i=2;i<=N;i++)
        {
            int streak=1,num=i;
            int stop=0;
            boolean flag=false;
        
            do
            {
                if(num%streak==0)
                {
                    if(streak>k)
                    {
                    stop++;
                    flag=true;

                    }
                    else
                    {
                    streak++;
                    num++;
                    }
                }
                else
                {
                   streak--;
                    stop++;
                    flag=true;
                }
            }while(!flag);
            if(streak==k)
            {
            result++;
            }

        }
     System.out.println(result);
    }
}