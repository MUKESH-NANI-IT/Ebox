public class Cards{
    public static int findValue(int a,int b)
    {
        int small,large,l;
    //type your code here
     if(a<=b){
        small=a;
        large=b;
        }
        else{
        small=b;
        large=a;
        }
         while(true)
        {
            if(large%small==0){
            l=small;
            break;
            }
            else{
                int temp=large;
                large=small;
                small=temp%small;

            }
        }
        return l;

}
}
