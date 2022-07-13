class Country
{
    public String name;
    public String countryCode;
    public String isdCode;
    public Country(String name, String countryCode, String isdCode)
    {
        this.name = name;
        this.countryCode = countryCode;
        this.isdCode = isdCode;
       

    }
    public String getName()
    {
        return name;
    }
    public String getCountryCode()
    {
        return countryCode;
    }
    public String getIsdCode()
    {
        return isdCode;
    }
    public void setName(String name)
    {
        this.name = name;
        
    }
    public void setCountryCode(String countryCode)
    {
        this.countryCode = countryCode;
        
    }
    public void setIsdCode(String isdCode)
    {
        this.isdCode = isdCode;
        
    }
    public String toString()
    {
        return "Country Name: " + name + "\nCountry Code: " + countryCode + "\nISD Code: " + isdCode;
    }

}