import java.util.Date;

class Hall
{
    private String name;
    private long contactNumber;
    private double costPerDay;
    private String ownerName;
    private Date bookingDate;
    public Hall(String name, long contactNumber, double costPerDay, String ownerName, Date bookingDate)
    {
        this.name = name;
        this.contactNumber = contactNumber;
        this.costPerDay = costPerDay;
        this.ownerName = ownerName;
        this.bookingDate = bookingDate;
    }
    public String getName()
    {
        return name;
    }
    public long getContactNumber()
    {
        return contactNumber;
    }
    public double getCostPerDay()
    {
        return costPerDay;
    }
    public String getOwnerName()
    {
        return ownerName;
    }
    public Date getBookingDate()
    {
        return bookingDate;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setContactNumber(long contactNumber)
    {
        this.contactNumber = contactNumber;
    }
    public void setCostPerDay(double costPerDay)
    {
        this.costPerDay = costPerDay;
    }
    public void setOwnerName(String ownerName)
    {
        this.ownerName = ownerName;
    }
    public void setBookingDate(Date bookingDate)
    {
        this.bookingDate = bookingDate;
    }
    //Override equals method that compares all the fields of the class and returns boolean.
    public boolean equals(Object obj)
    {
        if(obj == null)
        {
            return false;
        }
        if(getClass() != obj.getClass())
        {
            return false;
        }
        Hall other = (Hall)obj;
        if(this.name == null)
        {
            if(other.name != null)
            {
                return false;
            }
        }
        else if(!this.name.equals(other.name))
        {
            return false;
        }
        if(this.contactNumber != other.contactNumber)
        {
            return false;
        }
        if(Double.doubleToLongBits(this.costPerDay) != Double.doubleToLongBits(other.costPerDay))
        {
            return false;
        }
        if(this.ownerName == null)
        {
            if(other.ownerName != null)
            {
                return false;
            }
        }
        else if(!this.ownerName.equals(other.ownerName))
        {
            return false;
        }
        if(this.bookingDate == null)
        {
            if(other.bookingDate != null)
            {
                return false;
            }
        }
        else if(!this.bookingDate.equals(other.bookingDate))
        {
            return false;
        }
        return true;
    }
    

}