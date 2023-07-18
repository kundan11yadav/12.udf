#include <stdio.h>
void greatest();
int main()
{
    greatest();
    return 0;
}
void greatest()
{
    int x, y, z;
    printf("Enter any three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%d is greatest than %d and %d.\n", x, y, z);
    }
    else if (y > x && y > z)
    {
        printf("%d is greatest than %d and %d.\n", y, x, z);
    }
    else if (z > x && z > x)
    {
        printf("%d is gretest than %d and %d.\n", z, x, y);
    }
    else
    {
        printf("All the numbers are equal.\n");
    }
}