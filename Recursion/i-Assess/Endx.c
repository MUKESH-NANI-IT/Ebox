#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *endx(char *str){
if(*(str+1)=='\0')
return str;
else{
if(*str=='x')
{
int s=strlen(str);
char*s1=(char*)malloc(sizeof(char)*(strlen(str)));
strcpy(s1, str+1);
strcpy(str, s1);
str=endx(str);
str[s-1]='x';
str[s]='\0';
return str;
}
return endx(str+1)-1;
}
}
int main()
{
    char a[100];
printf("Enter the string\n");
scanf("%s", a);
printf("%s", endx(a));
return 0;
}