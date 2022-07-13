
class ItemType{
    private String name;
    private double deposit;
    private double costPerDay;
    
    public ItemType(String name, double deposit, double costPerDay){
        this.name = name;
        this.deposit = deposit;
        this.costPerDay = costPerDay;
    }
    
    public String getName(){
        return name;
    }
    
    public double getDeposit(){
        return deposit;
    }
    
    public double getCostPerDay(){
        return costPerDay;
    }
    
    public void setName(String name){
        this.name = name;
    }
    
    public void setDeposit(double deposit){
        this.deposit = deposit;
    }
    
    public void setCostPerDay(double costPerDay){
        this.costPerDay = costPerDay;
    }
    //display the item type information
    public void display(){
        System.out.println("Item Type: " + name);
        System.out.println("Deposit: " + String.format("%.1f",deposit));
        System.out.println("Cost Per Day: " + String.format("%.1f",costPerDay));
    }
}