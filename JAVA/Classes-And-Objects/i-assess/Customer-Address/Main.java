import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the Customer Address");
        System.out.println("Enter the Street");
        String street = input.nextLine();
        System.out.println("Enter the city");
        String city = input.nextLine();
        System.out.println("Enter the  pincode");
        int pincode = input.nextInt();
        input.nextLine();
        System.out.println("Enter the country");
        String country = input.nextLine();
        Address address = new Address(street, city, pincode, country);
        System.out.println(address.displayAddress(street, city, pincode, country));
    }
}