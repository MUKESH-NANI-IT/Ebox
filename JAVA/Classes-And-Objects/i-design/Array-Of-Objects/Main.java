//Create a driver class called Main to test the above classes.
import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        System.out.println("Enter the number of users:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        User[] userArray = new User[n];
        for (int i = 0; i < n; i++)
        {
            System.out.println("Enter the details of User " + (i + 1));
            System.out.println("Enter the name of the user:");
            String name = sc.next();
            System.out.println("Enter the mobile number of the user:");
            String mobileNumber = sc.next();
            System.out.println("Enter the username of the user:");
            String username = sc.next();
            System.out.println("Enter the password of the user:");
            String password = sc.next();
            User userIns = new User(name, mobileNumber, username, password);
            userArray[i] = userIns;
        }
        System.out.println("User details as entered:");
        UserBO userBO = new UserBO();
        userBO.displayAll(userArray);
        System.out.println("After sorting:");
        userBO.sortUser(userArray);
        userBO.displayAll(userArray);
        System.out.println("Enter the user to be deleted:");
        String name = sc.next();
        //delete the user with the given name
        boolean status = userBO.deleteUser(userArray, name);
    }
}