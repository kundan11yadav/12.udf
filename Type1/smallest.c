#include <stdio.h>
void smallest();
int main()
{
    smallest();
    return 0;
}
void smallest()
{
    int x, y, z;
    printf("Enter any three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x < z)
    {
        printf("%d is smaller than %d and %d.\n", x, y, z);
    }
    else if (y < x && y < z)
    {
        printf("%d is smaller than %d and %d.\n", y, x, z);
    }
    else if (z < x && z < x)
    {
        printf("%d is smaller  than %d and %d.\n", z, x, y);
    }
    else
    {
        printf("All the numbers are equal.\n");
    }
}