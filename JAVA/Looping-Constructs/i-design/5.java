import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int v=2*n-1;
        for(int i = n; i >= 1;i--) 
        {
            for (int j = 1;j<=v ; j++) 
            {
                if((j==i)||(j==v-i+1)||(i==1))
                {
                    System.out.print("*");
                }
                else if( j>v-i+1 || j<i)
                {
                    System.out.print("b");
                }
                else
                {
                    System.out.print("i");
                }
            }

            System.out.println();
        }
    }
}
