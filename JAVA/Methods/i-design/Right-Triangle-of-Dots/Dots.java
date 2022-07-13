public class Dots{
    public static int find(int n)
    {
    //type your code here
    int x=0,i=0;
    for ( i = 1; i <=n; i++)
    {
        int y=(i*(i+1))/2;
        if (n==y)
        {
            x=i;
            break;
        }
    }
    int a=(x*(x+1))/2;
    if(n==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
}
