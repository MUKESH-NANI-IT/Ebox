import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        double gross,hdr,da;
        int basic;
        basic = sc.nextInt();
        if(basic<15000) {
            hdr=0.15*basic;
            da=0.9*basic;
            gross = basic+hdr+da;
        }
        else {
            hdr=5000;
            da=0.98*basic;
            gross=basic+hdr+da;
        }
        System.out.format("%.2f",gross);
    }
}