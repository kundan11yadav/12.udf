#include <stdio.h>
void check();
int main()
{
    check();
    return 0;
}
void check()
{
    int n;
    if (n == 0)
    {
        printf("The number is zero.\n");
    }

    else if (n > 0)
    {
        printf("The number is positive.\n");
    }
    if (n < 0)
    {
        printf("The number is negative.\n");
    }
}