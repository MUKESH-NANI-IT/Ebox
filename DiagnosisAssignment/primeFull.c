#include <stdio.h>
int primeCheck(int n);
int primeCheck(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int minCount(int n);
int minCount(int n)
{

    int min;

    if (primeCheck(n) == 1)
    {
        min = 1;
    }

    else if (n % 2 == 0)
    {
        min = 2;
    }

    else
    {

        if (primeCheck(n - 2) == 1)
        {
            min = 2;
        }

        else
        {
            min = 3;
        }
    }

    return min;
}
int main(int argc, char const *argv[])
{
    int input;
    scanf("%d", &input);
    int output = minCount(input);
    printf("%d", output);

    return 0;
}
