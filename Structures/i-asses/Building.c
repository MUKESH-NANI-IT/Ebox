#include <stdio.h>
#include <string.h>
struct Building
{
    char name[30];
    double length;
    double width;
    double height;
    double ratePerSqFt;
} b[10];
int i, j, n;
double a, v;
int main()
{
    printf("Enter the number of buildings\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter the details of building %d\n", i);
        printf("Enter name\n");
        scanf("%s", b[i].name);
        printf("Enter length\n");
        scanf("%lf", &b[i].length);
        printf("Enter width\n");
        scanf("%lf", &b[i].width);
        printf("Enter height\n");
        scanf("%lf", &b[i].height);
        printf("Enter rate per square feet\n");
        scanf("%lf", &b[i].ratePerSqFt);
    }
    struct Building temp;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (strcmp(b[i].name, b[j].name) < 0)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {

        a = b[i].length * b[i].width;
        v = a * b[i].ratePerSqFt;
        printf("Details of building %d\n", i);
        printf("Name : %s\n", b[i].name);
        printf("Area : %0.2lf\n", a);
        printf("Value : %0.2lf\n", v);
    }
    return 0;
}
