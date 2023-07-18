#include <stdio.h>
void factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int n, result = 1;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("The factorial is %d\n", result);
}