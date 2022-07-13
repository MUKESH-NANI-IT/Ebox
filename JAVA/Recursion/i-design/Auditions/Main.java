import java.util.*;
public class Main{
    public static void main(String args[]){
        //type your code here
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int pos = Position.findPos(x);
        System.out.println(pos);
    }
}

