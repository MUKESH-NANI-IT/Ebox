class UserBO
{
    // A method addUser() that accepts an array of userIns objects and the new userIns object to be added as the arguments.This method adds the new userIns object to the array.
    public void addUser(User[] userArray, User userIns)
    {
        int length = userArray.length;
        User[] temp = new User[length + 1];
        for (int i = 0; i < length; i++)
        {
            temp[i] = userArray[i];
        }
        temp[length] = userIns;
        userArray = temp;
    }
    //A method sortUser() that accepts an array of user objects as the argument.This method sorts the array in ascending order according to the userIns object's name.
    public void sortUser(User[] userArray)
    {
        for (int i = 0; i < userArray.length; i++)
        {
            for (int j = i + 1; j < userArray.length; j++)
            {
                if (userArray[i].getName().compareTo(userArray[j].getName()) > 0)
                {
                    User temp = userArray[i];
                    userArray[i] = userArray[j];
                    userArray[j] = temp;
                }
            }
        }
    }
    //The method accepts 2 arguments. The first argument is an array of user objects and the name of the user.This method deletes the specific user from the array and returns true if the user presents. Otherwise returns false.
    public boolean deleteUser(User[] userArray, String name)
    {
        for (int i = 0; i < userArray.length; i++)
        {
            if (userArray[i].getName().equals(name))
            {
                User[] temp = new User[userArray.length - 1];
                for (int j = 0; j < i; j++)
                {
                    temp[j] = userArray[j];
                }
                for (int j = i + 1; j < userArray.length; j++)
                {
                    temp[j - 1] = userArray[j];
                }
                userArray = temp;
                System.out.println("User deleted successfully");
                System.out.println("After Deleting:");
                displayAll(userArray);
                return true;
            }
            
        }
        System.out.println("No user found with given name");
        // displayAll(userArray);
        return false;
    }

    //A method displayAll() that accepts an array of user objects as the argument.This method displays all the userIns objects in the array.
    public void displayAll(User[] userArray)
    {
        System.out.println("User Details:");
        for (int i = 0; i < userArray.length; i++)
        {
            System.out.println("User " + (i + 1));
            System.out.println("Name:" + userArray[i].getName());
            System.out.println("Mobile Number:" + userArray[i].getMobileNumber());
            // System.out.println("Username: " + userArray[i].getUsername());
            // System.out.println("Password: " + userArray[i].getPassword());
        }
    }
}