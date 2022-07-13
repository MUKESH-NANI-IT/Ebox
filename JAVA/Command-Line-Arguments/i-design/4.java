class  Main
{
    public static boolean isNumber(String a)
    {
        for(int i=0;i<a.length();i++)
        {
            if(Character.isDigit(a.charAt(i)) == false)
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String args[])
    {
        String a=args[0];
        if(isNumber(a))
        {
            System.out.println("The given input is an integer");
        }
        else {
            System.out.println("The given input is a string");
        }
        
    }
}