public class ModInverse{
    public static int findValue (int x, int m)
    {
    //type your code here
    int i,k=-1;
    for(i=1;i<m;i++)
    {
        if(((x%m)*(i%m))%m==1)
        {
            k=i;
        }
    }
    return k;
    }
}
