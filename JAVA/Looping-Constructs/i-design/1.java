import java.math.*;
import java.util.*;
class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int num,tempNum,digit,c;
        int rem;
        num=sc.nextInt();
        digit=4;
        c=0;
        tempNum=num;
        while(tempNum>0)
        {
            rem=tempNum%10;
            
            if(rem==digit)
            {
                c++;
            }
            tempNum=tempNum/10;
    }
    System.out.println(c);
}
}