class Address
{
    public String street;
    public String countryCode;
    public String countryName;
    public int pinCode;
    public Address(String street, String countryCode,int pincode ,String countryName)
    {
        this.street = street;
        this.countryCode = countryCode;
        this.countryName = countryName;
        this.pinCode = pinCode;

    }
    public String getName()
    {
        return street;
    }
    public String getCountryCode()
    {
        return countryCode;
    }
    public String getCountryName()
    {
        return countryName;
    }
    public int getPinCode()
    {
        return pinCode;
    }
    public void setName(String street)
    {
        this.street = street;
        
    }
    public void setCountryCode(String countryCode)
    {
        this.countryCode = countryCode;
        
    }
    public void setCountryName(String countryName)
    {
        this.countryName = countryName;
        
    }
    public void setPinCode(int pinCode)
    {
        this.pinCode = pinCode;
        
    }
    public String displayAddress(String street,String countryCode,int pinCode, String countryName)
    {
        return "Street: "+street+"\nCity: "+countryCode+"\nPincode: "+pinCode+"\nCountry: "+countryName;
    }
}