import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.util.Date;
import java.time.temporal.ChronoUnit;
// import java.util.LocalDate;
class ItemTypeBO
{
    public double calculateCost(Date startDate, Date endDate, ItemType itemType)
    {
        // calculate the total cost
        double totalCost = 0;
        // calculate the number of days
        long days = ChronoUnit.DAYS.between(startDate.toInstant().atZone(
                java.time.ZoneId.systemDefault()).toLocalDate(), endDate.toInstant().atZone(
                java.time.ZoneId.systemDefault()).toLocalDate());
        // calculate the total cost
        totalCost = itemType.getCostPerDay() * days;
        return totalCost;
    }
}
