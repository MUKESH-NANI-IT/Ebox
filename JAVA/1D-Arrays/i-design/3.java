import java.util.Scanner;
class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int num;
        num = sc.nextInt();
        int l[] = new int[num];
        int r[] = new int[num];
        int prod[] = new int[num];
        int i;
        for(i=0;i<num;i++)
        {   
            l[i] = sc.nextInt();
        }
        for(i=0;i<num;i++)
        {   
            r[i] = sc.nextInt();
        }
        for(i=0;i<num;i++)
        {
            prod[i] = l[i]*r[i];
        }
        int res[] = {0,0,0};
        for(i=0;i<num; i++)
        {
            if(res[0] <prod[i])
            { 
                res [0]=prod[i]; 
                res[1]=r[i];
                res[2]=i;
            }
            else if(res[0]==prod[i]) 
            {
                if(r[i]>res[1])
                {
                    res[1]=r[i];
                    res[2]=i;
                }
            }
        }
        System.out.println(res[2]+1);
    }
}