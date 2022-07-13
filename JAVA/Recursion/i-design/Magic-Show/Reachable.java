public class Reachable{
    public static boolean isReachable (int sx,int sy,int dx,int dy)
    {
    //type your code here
    if(sx>dx || sy>dy)
    {
        return false;
    }
    if(sx==dx && sy==dy)
    {
        return true;
    }
    
    return (isReachable(sx + sy, sy, dx, dy) ||
                isReachable(sx, sy + sx, dx, dy));

}
}
