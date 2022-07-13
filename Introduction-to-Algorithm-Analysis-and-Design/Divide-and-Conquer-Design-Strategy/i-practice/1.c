#include<stdio.h>
#include<stdlib.h>
void maxmin(int *list, int low, int high, int *max, int *min)
{
    int mid,max1,min1,max2,min2;
    if (low == high)
    {
          /*------------ Fill your code here-------------*/
    }
    else if (low == high-1)
    {
          /*------------ Fill your code here-------------*/
    }

   else
   {
           /*------------ Fill your code here-------------*/
   }
}

int main(void)
{
    int *list,i;
    int size;
  int max,min;
    printf("Enter the number of elements\n");
    scanf("%d",&size);
    list=(int *)malloc(size*sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<size;i++)
      scanf("%d",list+i);
    maxmin(list, 0, size-1, &max, &min);
    printf("The minimum element is %d\n",min);
    printf("The maximum element is %d\n", max);
    return 0;
}