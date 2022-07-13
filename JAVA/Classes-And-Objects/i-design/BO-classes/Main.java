//Create a driver class Main to test the above classes. Get the start date and end date (manipulate as Date object) from the stall owners to calculate rent for the particular ItemType.
import java.util.Scanner;
import java.text.SimpleDateFormat;
import java.util.Date;  
import java.text.ParseException;
class Main
{
    public static void main(String[] args)
    {
        
        // set the item type details
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the details of the item type");
        System.out.println("Name:");
        String name;
        name=scanner.nextLine();
        System.out.println("Deposit:");
        double deposit=scanner.nextDouble();
        System.out.println("Cost per day:");
        double Cpd=scanner.nextDouble();
        // create a new ItemTypeBO object
        ItemTypeBO itemTypeBO = new ItemTypeBO();
        // create a new ItemType object
        ItemType itemType = new ItemType(name, deposit, Cpd);
        String start_dt;
        String end_dt;
        System.out.println("Enter the starting date");
        start_dt=scanner.next();
        System.out.println("Enter the ending date");
        end_dt=scanner.next();
        Date fDate;
        Date sDate;
        SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-yyyy");

        // create a new Date object for start date
        try {

            fDate = sdf.parse(start_dt);
        // create a new Date object for end date
            sDate = sdf.parse(end_dt);
            double totalCost = itemTypeBO.calculateCost(fDate, sDate, itemType);
            System.out.println("The total cost is: " + String.format("%.1f",totalCost));

        } catch (ParseException e) {
            e.printStackTrace();
        }
        // calculate the total cost
          
        // print the total cost

        
    }
}