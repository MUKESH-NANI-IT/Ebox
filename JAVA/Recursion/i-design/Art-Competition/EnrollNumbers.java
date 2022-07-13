public class EnrollNumbers{
    public static void printNumbers (int n)
    {
    //type your code here
    if(n>0)
    {
        printNumbers(n-1);
        System.out.print(n+" ");
    }
    return;
}
}
