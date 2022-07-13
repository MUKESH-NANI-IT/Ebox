public class FindSum{
    public static int summation (int n,int m)
    {
    //type your code here
    if (m == 1)
            return (n * (n + 1) / 2);
     
        int sum = summation(n, m - 1);
         
        return (sum * (sum + 1) / 2);
    }
}

