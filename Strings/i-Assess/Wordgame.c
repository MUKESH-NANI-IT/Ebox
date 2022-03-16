#include <stdio.h>
#include <string.h>
int main()
{
    char words[20][20];
    int i, count = 0;
    char endLine[] = "####";
    for (i = 0; i < 20; i++)
    {
        char temp[20];
        scanf("%s", temp);
        if (!strcmp(temp, endLine))
        {
            break;
        }
        strcpy(words[i], temp);
        count++;
    }
    for (i = 0; i < count; i++)
    {
        int endChar = strlen(words[i]) - 1;
        if (words[i][endChar] == words[i + 1][0])
        {
            printf("%s\n", words[i]);
        }
        else
        {
            printf("%s\n", words[i]);
            break;
        }
    }
    return 0;
}