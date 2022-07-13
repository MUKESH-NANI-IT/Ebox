import java.util.Scanner;
class Main
{
    public static String settingName()
    {
        String name;
        Scanner input = new Scanner(System.in);
        name = input.nextLine();
        return name;

    }
    public static double settingDeposit()
    {
        double deposit;
        Scanner input = new Scanner(System.in);
        deposit = input.nextDouble();
        return deposit;
    }
    public static double settingCostPerDay()
    {
        double costPerDay;
        Scanner input = new Scanner(System.in);
        costPerDay = input.nextDouble();
        return costPerDay;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number of Item Type");
        int n = sc.nextInt();
        ItemType[] ItemTypeArray = new ItemType[n];
        for (int i = 0; i < n; i++)
        {
            ItemType ItemTypeIns = new ItemType();
            System.out.println("Enter the Item Type "+(i+1)+" Name");
            String name = settingName();
            ItemTypeIns.setName(name);
            System.out.println("Enter the Deposit Amount");
            double deposit = settingDeposit();
            ItemTypeIns.setDeposit(deposit);
            System.out.println("Enter the Cost per day");
            double costPerDay = settingCostPerDay();
            ItemTypeIns.setCostPerDay(costPerDay);
            ItemTypeArray[i] = ItemTypeIns;
            System.out.println("New item added successfully");
        }
        ItemTypeBO ItemTypeBOIns = new ItemTypeBO();
        ItemTypeBOIns.display(ItemTypeArray);
        System.out.println("Enter the Name of the item to be searched");
        String name = sc.next();
        ItemTypeBOIns.search(name, ItemTypeArray);


    }
}