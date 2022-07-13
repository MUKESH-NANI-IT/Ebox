class Main
{
    public static void main(String args[])
    {
        int c;
        System.out.println("Names in even position :");
        for(c=0;c<args.length;c++)
        {
            if(c%2!=0)
            {
            System.out.println(args[c]);
            }
        }
    }
}