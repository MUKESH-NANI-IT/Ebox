import java.util.Scanner;
class Main 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Item Type Name");
        String name = sc.nextLine();
        System.out.println("Enter the Deposit Amount");
        double deposit = sc.nextDouble();
        System.out.println("Enter the Cost per day of the Item Type");
        double costPerDay = sc.nextDouble();
        ItemType itemType = new ItemType(name, deposit, costPerDay);
        itemType.display();
    }
}