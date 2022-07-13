import java.util.Scanner;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.text.ParseException;
import java.text.DateFormat;
class Main
{
    public static String settingOwner()
    {
        Scanner sc = new Scanner(System.in);
        String ownerName = sc.nextLine();
        return ownerName;
    }
    public static String settingname()
    {
        Scanner sc = new Scanner(System.in);
        String Name = sc.nextLine();
        return Name;
    }
    public static String settingDate()
    {
        Scanner sc = new Scanner(System.in);
        String bookingDate = sc.nextLine();
        return bookingDate;
    }
    public static void main(String[] args) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        String name1, name2,ownerName1,ownerName2;
        long contactNumber1, contactNumber2;
        double costPerDay1, costPerDay2;
        Date bookingDate1, bookingDate2;
        try{
        System.out.println("Enter the details of Hall 1");
        System.out.println("Name :");
        name1 = settingname();
        System.out.println("Contact Number :");
        contactNumber1 = sc.nextLong();
        System.out.println("Cost Per Day :");
        costPerDay1 = sc.nextDouble();
        System.out.println("Owner Name :");
        ownerName1 = settingOwner();
        System.out.println("Booking Date(dd/mm/yyyy) :");
        String sdate1 = settingDate();
        bookingDate1 = new SimpleDateFormat("dd/MM/yyyy").parse(sdate1);
        System.out.println("Enter the details of Hall 2");
        System.out.println("Name :");
        name2 = settingname();
        System.out.println("Contact Number :");
        contactNumber2 = sc.nextLong();
        System.out.println("Cost Per Day :");
        costPerDay2 = sc.nextDouble();
        System.out.println("Owner Name :");
        ownerName2 = settingOwner();
        System.out.println("Booking Date(dd/mm/yyyy) :");
        String sdate2 = settingDate();
        bookingDate2 = new SimpleDateFormat("dd/MM/yyyy").parse(sdate2);
        Hall hall1 = new Hall(name1, contactNumber1, costPerDay1, ownerName1, bookingDate1);
        Hall hall2 = new Hall(name2, contactNumber2, costPerDay2, ownerName2, bookingDate2);
        if(hall1.equals(hall2))
        {
            System.out.println("Halls are same");
        }
        else
        {
            System.out.println("Halls are different");
        }
        }
        catch(ParseException e)
        {
            e.printStackTrace();
        }
        
    }
}