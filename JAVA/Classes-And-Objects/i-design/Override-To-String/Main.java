import java.util.Scanner;
class Main
{
        public static void main(String[] args)
        {
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter Address Line 1");
                String addressLine1 = sc.nextLine();
                System.out.println("Enter Address Line 2");
                String addressLine2 = sc.nextLine();
                System.out.println("Enter the City Name");
                String city = sc.nextLine();
                System.out.println("Enter the State Name");
                String state = sc.nextLine();
                System.out.println("Enter the Pincode");
                long pincode = sc.nextLong();
                Address address = new Address(addressLine1,addressLine2,city,state,pincode);
                
                System.out.println("The Address Details are\n"+address);
        }
}