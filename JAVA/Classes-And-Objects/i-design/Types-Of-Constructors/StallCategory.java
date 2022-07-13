class StallCategory
{
    public String name;
    public String detail;
    public String getName()
    {
        return name;
    }
    public String getDetail()
    {
        return detail;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setDetail(String detail)
    {
        this.detail = detail;
    }
    
    public StallCategory(String name,String detail)
    {
        this.name=name;
        this.detail=detail;
        // System.out.println("Using Parameterized Constructor");
    }
    public void display()
    {

        System.out.println("Details of the stall category:");
        System.out.println("Name: "+name);
        System.out.println("Detail: "+detail);
    }


}