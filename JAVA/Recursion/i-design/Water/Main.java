import java.util.*;
public class Main{
    public static void main(String args[]){
        //type your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int d = sc.nextInt();
        int result = PouringWater.minSteps(n, m, d);
        System.out.println(result);
    }
}
