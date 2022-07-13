class Main
{
    public static void main(String args[])
    {
        int a=0;
        System.out.println("Square of the number :");
        for (String str : args)
        {
            a=Integer.parseInt(str);
        }
        System.out.println(a*a);
    }
}