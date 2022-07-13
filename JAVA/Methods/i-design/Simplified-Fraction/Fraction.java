public class Fraction{
    public static void printValue (int num,int den)
    {
    //type your code here
    if(num%den==0)
    {
        System.out.println(num/den);
        return ;
    }
    int i=num;
    while (i>=2)
    {
        if(num%i==0 && den%i==0)
        {
            num=num/i;
            den=den/i;
        }
        i--;
    }
    if(num<den)
    {
     System.out.println(num+""+den);
    }
    else
    {
        System.out.println(num/den+" "+(num%den)+"/"+den);
    }
}
}
