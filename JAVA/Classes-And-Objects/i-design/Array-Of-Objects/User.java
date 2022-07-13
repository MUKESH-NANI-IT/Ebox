class User
{
    private String name;
    private String mobileNumber;
    private String username;
    private String password;
    public User(String name, String mobileNumber, String username, String password)
    {
        this.name = name;
        this.mobileNumber = mobileNumber;
        this.username = username;
        this.password = password;
    }
    public String getName()
    {
        return name;
    }
    public String getMobileNumber()
    {
        return mobileNumber;
    }
    public String getUsername()
    {
        return username;
    }
    public String getPassword()
    {
        return password;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setMobileNumber(String mobileNumber)
    {
        this.mobileNumber = mobileNumber;
    }
    public void setUsername(String username)
    {
        this.username = username;
    }
    public void setPassword(String password)
    {
        this.password = password;
    }
    
}