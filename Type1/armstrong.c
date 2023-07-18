#include <stdio.h>
#include <math.h>
void check_arm();
int main()
{
    check_arm();
    return 0;
}
void check_arm()
{
    int n, backup, rev = 0, rem, count;
    printf("Enter the number:\t");
    scanf("%d", &n);
    backup = n;
    for (int j = 1; j <= n; j++)
    {
        n = n / 10;
        count++;
    }

    for (int i = 0; i <= n; i++)
    {
        rev = n % 10;
        rev = pow(rem, count) + rev;
        n = n / 10;
    }
    if (rev == backup)
    {
        printf("The number ia armstrong.\n");
    }
    else
    {
        printf("The number is not armstrong.\n");
    }
}