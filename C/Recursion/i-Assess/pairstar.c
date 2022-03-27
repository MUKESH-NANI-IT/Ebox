#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *pairstar (char *str)
{
if(*str=='\0')
return str;
if(*str==*(str+1))
{ 
    char*s1=(char*)malloc(sizeof (char)*(strlen(str)));
strcpy(s1,(str+1));
*(str+1)='*';
strcpy((str+2), s1);
}
return pairstar (str+1)-1;
}
int main()
{
char a[20];
printf("Enter the string\n");
scanf("%s", a);
printf("%s", pairstar(a));
return 0;
}