public class BinaryNumbers{
    public static void printNums (int n)
    {
        String s="";
        printRec(s,0,n);
    
    }
    static void printRec(String number,
                         int extraOnes,
                         int remainingPlaces)
    {
        
        if (0 == remainingPlaces) {
            System.out.print(number + " ");
            return;
        }
 
        printRec(number + "1", extraOnes + 1,
                 remainingPlaces - 1);
 
        if (0 < extraOnes)
            printRec(number + "0", extraOnes - 1,
                     remainingPlaces - 1);
    }
}
