#include <stdio.h>
int check();
int main()
{
    int value;
    value = check();
    if (value == 0)
    {
        printf("The number is zero.\n");
    }
    else if (value == 1)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0;
}
int check()
{
    int n;
    printf("Enter the number:\t");
    scanf("%d", &n);
    if (n == 0)
    {
        return 0;
    }
    else if (n > 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}