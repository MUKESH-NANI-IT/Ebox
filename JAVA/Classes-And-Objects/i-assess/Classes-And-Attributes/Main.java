import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the country name");
        String name = input.nextLine();
        System.out.println("Enter the country code");
        String countryCode = input.nextLine();
        System.out.println("Enter the isd code");
        String isdCode = input.nextLine();
        Country country = new Country(name, countryCode, isdCode);
        System.out.println(country);
    }
}