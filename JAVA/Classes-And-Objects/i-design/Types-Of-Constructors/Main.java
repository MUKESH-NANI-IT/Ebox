import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the stall category:");
        String name = sc.nextLine();
        System.out.println("Enter the detail of the stall category:");
        String detail = sc.nextLine();
        StallCategory sc1 = new StallCategory(name,detail);
        System.out.println("Using Default Constructor");
         sc1.display();
        StallCategory sc2 = new StallCategory(name,detail);
        System.out.println("Using Parametersied Constructor");
        sc2.display();

    }
}