import java.util.*;
public class Main{
    public static void main(String args[]){
        //get inputs 
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int result = Dots.find(n);
        if (n>0)
        {
        if (result==1)
        {
            System.out.println("Yes");
        }

        else
        {
            System.out.println("No");
        }
        }
        
        //type your code here
    }
}