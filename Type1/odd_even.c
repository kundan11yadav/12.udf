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
    printf("Enter the number:\t");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}