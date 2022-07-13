class Main
{
    public static void main(String args[])
    {
        int i,s=0;
        
         if(args.length!=2)
        {
            System.out.println("Invalid Input");
            System.exit(1);
        }
        else{
        for(i=0;i<2;i++){
            s=s+Integer.parseInt(args[i]);
        }
        }
        System.out.println("The sum of "+args[0]+" and "+args[1]+" is "+s);
        
    }
}