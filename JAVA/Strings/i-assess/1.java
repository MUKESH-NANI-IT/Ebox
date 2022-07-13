import java.util.*;
import java.lang.*;
import java.io.*;
class Main{
    public static String pairStar(String str) {
  if (str.equals("") || str.length() == 1) return str;
  if (str.charAt(0) == str.charAt(1)) 
    return str.charAt(0) + "*" + pairStar(str.substring(1));
  else
    return str.charAt(0) + pairStar(str.substring(1));
}
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        String s;
        System.out.println("Enter the string");
        s=sc.nextLine();
        String str=pairStar(s);
        System.out.println("The processed string is "+str);


    }
}
