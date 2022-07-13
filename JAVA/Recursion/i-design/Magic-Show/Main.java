import java.util.*;
public class Main{
    public static void main(String args[]){
        //type your code here
        Scanner sc = new Scanner(System.in);
        int s_x = sc.nextInt();
        int s_y = sc.nextInt();
        int d_x = sc.nextInt();
        int d_y = sc.nextInt();
        boolean isreach = Reachable.isReachable(s_x,s_y,d_x,d_y);
        System.out.println(isreach);
    }
}

