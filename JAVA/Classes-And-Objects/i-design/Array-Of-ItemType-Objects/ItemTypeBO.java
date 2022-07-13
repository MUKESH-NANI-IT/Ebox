class ItemTypeBO
{
    
    //A void method search() that accepts an array of ItemType objects and the name of the ItemType object to be searched as the argument.This method searches the array for the ItemType object and  displays the details of the ItemType if matched. else prints "Searched Item Type not found".
    public void search( String name, ItemType[] ItemTypeArray)
    {
        for (int i = 0; i < ItemTypeArray.length; i++)
        {
            if (ItemTypeArray[i].getName().equals(name))
            {
                System.out.println("Searched Item Type is:");
                System.out.println("Name:" + ItemTypeArray[i].getName());
                System.out.println("Deposit Amount:" + ItemTypeArray[i].getDeposit());
                System.out.println("Cost Per Day:" + ItemTypeArray[i].getCostPerDay());
                return;
            }
        }
        System.out.println("Searched Item Type not found");
    }
    // A void display() method that accepts an array of ItemType objects as the argument.This method displays the details of all the ItemType objects in the array.
    public void display(ItemType[] ItemTypeArray)
    {
        for (int i = 0; i < ItemTypeArray.length; i++)
        {
            System.out.println("Item Type Number "+(i+1)+":");
            System.out.println("Name:" + ItemTypeArray[i].getName());
            System.out.println("Deposit Amount:" + String.format("%.1f",ItemTypeArray[i].getDeposit()));
            System.out.println("Cost Per Day:" + String.format("%.1f",ItemTypeArray[i].getCostPerDay()));
        }
    }
}