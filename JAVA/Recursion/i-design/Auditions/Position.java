public class Position{
    public static int findPos (int x)
    {
     return (1<<bitlength(x));
    }
    public static int bitlength(int x)
    {
        boolean flag=true;
    //type your code here
        int c=0;
        while(flag)
        {
            if(x==0)
            {
                flag=false;
            }
            else
            {
                x=x>>1;
                c++;
            }
        }
        return --c;
    }
}
