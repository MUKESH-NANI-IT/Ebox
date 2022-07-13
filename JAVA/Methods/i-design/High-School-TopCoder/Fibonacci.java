public class Fibonacci{
    public static long fiboLastDigit(int num)
    {
    //type your code here
    long n1, n2, temp;
    n1 = n2 = 1;
    if (num == 0)
    {
        return 0;
    }
    if (num == 1 || num == 2)
    {
        return 1;
    }
    for (int i = 2; i < num; i++)
    {
        temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }
    long res = n2 % 10;
    return res;
}
}
