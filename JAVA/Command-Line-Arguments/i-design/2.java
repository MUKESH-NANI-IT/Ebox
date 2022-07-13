class Main{
    public static void main(String[] args)
    {
        int i;
        System.out.println("Arguments :");
        for(String str : args)
        {
        System.out.println(str); 
        }
        int A=args.length;
        System.out.println("Number of arguments is "+A);
    }
}