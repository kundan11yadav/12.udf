#include <stdio.h>
void factor();
int main()
{
    factor();
    return 0;
}
void factor()
{
    int n, i;
    printf("Enter the number:\t");
    scanf("%d", &n);
    printf("The factors of %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }
}