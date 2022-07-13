import java.util.*;
public class Main{
    public static void main(String args[]){
        //get inputs
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int m = sc.nextInt();
        if(x>0 && m>0 && m<=900)
        {
            int a = ModInverse.findValue(x,m);
            if(a==-1)
            {
                System.out.println(-1);
            }
            else
            {
                System.out.println(a);
            }
            System.exit(1);
        }
    }
}