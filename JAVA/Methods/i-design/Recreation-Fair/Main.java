import java.util.*;
public class Main{
    public static void main(String args[]){
        //get inputs 
        Scanner sc=new Scanner(System.in);
        int a;
        a=sc.nextInt();
        int b;
        
        b=sc.nextInt();
        int result = Cards.findValue(a,b);
        System.out.println(result);
        //type your code here
    }
}