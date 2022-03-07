#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *endx(char *s)
{
    if (*(s + 1) == '\0')
    {
        return s;
    }
    else
    {
        if (*s == 'x')
        {
            int size = strlen(s);
            char s1[size];
            strcpy(s1, s + 1);
            strcpy(s, s1);
            s = endx(s);
            s[size - 1] = 'x';
            s[size] = '\0';
            return s;
        }
        return endx(s + 1) - 1;
    }
}

int main()
{
    char *s, *d;
    printf("Enter the string\n");

    s = (char *)malloc(1000 * (sizeof(char)));
    scanf("%[^\n]%*c", s);
    d = endx(s);
    printf("%s\n", d);
    return 0;
}
