import java.util.*;
public class Main
{
public static void main(String[] args) {
Scanner sc=new Scanner(System.in);
 int n=sc.nextInt();
 int arr[]=new int[n];
 int cnt=0;
 while(cnt<n){
     arr[cnt]=sc.nextInt();
     cnt++;
 }
 Arrays.sort(arr);
 System.out.print(arr[0]+" ");
 System.out.print(arr[n-1]);
 }

}