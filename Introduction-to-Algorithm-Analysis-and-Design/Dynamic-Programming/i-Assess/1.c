#include <stdio.h>
int main()
{
    int eo = 0;
    char str[10003];
    char *p;
    scanf("%s", str);
    p = str;
    while (*p != '\0')
    {
        if ((*p) % 2 == 0)
            eo = eo + 1;
        p++;
    }
    p = str;
    while (*p != '\0')
    {
        if ((*p) % 2 == 0)
        {
            printf("%d ", eo);
            eo = eo - 1;
        }
        else
            printf("%d ", eo);
        p++;
    }
    return 0;
}